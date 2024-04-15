from colour_detector import ColourDetector
from blob_detector import BlobDetector
import cv2
from freenect import sync_get_depth as get_depth, sync_get_video as get_video, stop_sync

class KinectVideo:

    @property
    def frame(self):
        (rgb, _) = get_video()
        return cv2.imread(rgb)

    @property
    def depth_frame(self):
        (depth, _) = get_depth()
        return cv2.imread(depth)

    def end(self):
        stop_sync()


if __name__ == "__main__":
    video = KinectVideo()
    col = ColourDetector()
    blo = BlobDetector()
    
    while True:
        # get frame
        frame = video.frame
        # convert frame to grayscale
        col.process_image(frame)
        grayscale_frame = col.grayscale_channel
        
        # split the frame into 3 sections acros the horizon
        # e.g. with a 1200 width -> 0-400, 400-800, 800-1200 sections
        # count the black area in each section and output
        # the area should increase with more of the line to follow -> could help line following
        size_of_areas = [0, 0, 0]
        
        dimensions = grayscale_frame.shape
        starty = 0
        endy = dimensions[0]
        section_width = dimensions[1] // 3
        for i in range(3):
            # get startx and endx
            #starty and endy will be the same
            startx = i * section_width
            endx = (i + 1) * section_width
            
            section_img = grayscale_frame[starty:endy, startx: endx]
            # reverse the grayscale image to have the white be black and black be white
            blo.process_image(cv2.bitwise_not(section_img))
            # use blob detector to find blobs and loop through all to get total area of seciotn
            total_area = 0
            for blob in blo.blobs:
                diameter = blob.size
                blob_area = 3.14 * (diameter / 2)**2
                total_area += blob_area
                
            size_of_areas[i] = total_area
        
        # return the largest area of the sections
        largest_area = max(size_of_areas)
        if largest_area == size_of_areas[0]:
            print("shoul tur left")
        elif largest_area == size_of_areas[1]:
            print("continue forward")
        elif largest_area == size_of_areas[2]:
            print("should turn right")
        else:
            print("how did this run")

