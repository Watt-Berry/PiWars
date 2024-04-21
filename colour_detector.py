# create class to detect a certain colour from image; and return coordinates?
import cv2
import numpy as np

# README: colour detector takes 1 image as its input to current_frame
# README: once its passed the image, it processes it and each colour channel can be accessed


class ColourDetector:
    def __init__(self):
        # private
        # each value will have the result and the mask
        self._colour_channels = {"BASE": None, "HSV": None,
                                 "RED": None, "GREEN": None, "BLUE": None, "YELLOW": None,
                                 "GRAYSCALE": None}#, "WHITE": None}

        self._masks = {"RED": None, "BLUE": None, "GREEN": None, "YELLOW": None}

    # public properties to return the private values
    # getter properties for the channels and masks
    @property
    def colour_channels(self):
        return self._colour_channels.keys()

    @property
    def base_channel(self):
        return self._colour_channels["BASE"]

    @property
    def hsv_channel(self):
        return self._colour_channels["HSV"]

    @property
    def red_channel(self):
        return self._colour_channels["RED"]

    @property
    def green_channel(self):
        return self._colour_channels["GREEN"]

    @property
    def blue_channel(self):
        return self._colour_channels["BLUE"]

    @property
    def yellow_channel(self):
        return self._colour_channels["YELLOW"]

    @property
    def grayscale_channel(self):
        return self._colour_channels["GRAYSCALE"]
    
    # @property
    # def white_channel(self):
    #     return self._colour_channels["WHITE"]

    @property
    def red_mask(self):
        return self._masks["RED"]

    @property
    def green_mask(self):
        return self._masks["GREEN"]

    @property
    def blue_mask(self):
        return self._masks["BLUE"]

    @property
    def yellow_mask(self):
        return self._masks["YELLOW"]
    
    def filter_noise(self, img):
        kernel = cv2.getStructuringElement(cv2.MORPH_ELLIPSE,(10,10))
        img = cv2.morphologyEx(img, cv2.MORPH_OPEN, kernel)
        
        return cv2.dilate(img, kernel, iterations=1, anchor=(0, 0))
    
    def process_image(self, image) -> None:
        # self._video_frame is already an image so just need to copy and convert to colour channels
        # don't need to imread the frame as it's already an image

        # convert the image to hsv
        hsv_image = cv2.cvtColor(image, cv2.COLOR_BGR2HSV)

        # for each colour:
        # get the bound for each colour by converting rgb values to hsv
        # upper bound = val + 10, lower bound = val - 10
        # to get bounds of a colour example:
            # >>> green = np.uint8([[[0,255,0 ]]])
            # >>> hsv_green = cv.cvtColor(green,cv.COLOR_BGR2HSV)
            # >>> print( hsv_green )

        # create a mask for the wanted colour
        # get the result from the frame and the mask
        # set the result to the dictionary
        # bgr colour array = [blue, green, red]


        blue_mask = cv2.inRange(hsv_image, (110, 50, 50), (130, 255, 255))
        # bitwise_and takes 2 hsv_images as src1 and src2 incase one of them is invalid?
        self._colour_channels["BLUE"] = cv2.cvtColor(cv2.bitwise_and(hsv_image, hsv_image, mask=blue_mask), cv2.COLOR_HSV2BGR)

        green_mask = cv2.inRange(hsv_image, (40, 50, 50), (80, 255, 255))
        self._colour_channels["GREEN"] = cv2.cvtColor(cv2.bitwise_and(hsv_image, hsv_image, mask=green_mask), cv2.COLOR_HSV2BGR)

        lower_red_mask = cv2.inRange(hsv_image, (0, 50, 50), (5, 255, 255))
        upper_red_mask = cv2.inRange(hsv_image, (160, 50, 50), (179, 255, 255))
        # in hsv, the red color loops around so need 2 masks for the start and end
        red_mask = lower_red_mask + upper_red_mask

        # white_mask = cv2.inRange(hsv_image, (0, 200, 200), (20, 255, 255))
        # self._colour_channels["WHITE"] = cv2.cvtColor(cv2.bitwise_and(hsv_image, hsv_image, mask=white_mask), cv2.COLOR_HSV2BGR)

        self._colour_channels["RED"] = cv2.cvtColor(cv2.bitwise_and(hsv_image, hsv_image, mask=red_mask), cv2.COLOR_HSV2BGR)

        yellow_mask = cv2.inRange(hsv_image, (20, 175, 50), (40, 255, 255))
        self._colour_channels["YELLOW"] = cv2.cvtColor(cv2.bitwise_and(hsv_image, hsv_image, mask=yellow_mask), cv2.COLOR_HSV2BGR)

        grayscale_image = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
        self._colour_channels["GRAYSCALE"] = grayscale_image

        self._colour_channels["BASE"] = image
        self._colour_channels["HSV"] = hsv_image

        self._masks["BLUE"] = self.filter_noise(blue_mask)
        self._masks["GREEN"] = self.filter_noise(green_mask)
        self._masks["RED"] = self.filter_noise(red_mask)
        self._masks["YELLOW"] = self.filter_noise(yellow_mask)