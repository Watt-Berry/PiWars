import cv2
import numpy as np

class BlobDetector:
    def __init__(self):
        self._blobs = None
        self._contours = None

    @property
    def blobs_img(self):
        return self._blobs
    
    @property
    def blobs_info(self):
        return self._contours

    # the image passed should be the mask as the mask is white/black
    def process_image(self, grey):
        # Detect blobs
        contours, hierarchy = cv2.findContours(image=grey, mode=cv2.RETR_TREE, method=cv2.CHAIN_APPROX_NONE)
        img_copy = cv2.cvtColor(grey,cv2.COLOR_GRAY2RGB)
        
        for c in contours:
            x, y, w, h = cv2.boundingRect(c)
            cv2.rectangle(img_copy,(x,y),(x+w,y+h),color=(0,0,255),thickness=3)
        # colour param is in BGR format
        self._blobs = img_copy
        self._contours = contours