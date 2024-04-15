from freenect import sync_get_depth as get_depth, sync_get_video as get_video

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