import numpy as np
import cv2
import math
import time
import vtk
import pyvista as pv # try installing this, need vtk library
from pyvista import examples
from rplidar import RPLidar, RPLidarException

"""
can get lidar stopping and starting by doing this:
1. start the program
2. exit the program BUT DO NOT close the pyvista window, ctrl z in terminal
3. start new program, will stop and start now
"""





class LidarDetector:
    def __init__(self):
        from rplidar import RPLidar, RPLidarException
        import math
        
        self.lidar = self.setup_lidar()
    
    def setup_lidar(self) -> RPLidar:
        lidar = RPLidar("/dev/ttyUSB0")
        lidar.clean_input()
        print(lidar.get_info())
        print(lidar.get_health())
        lidar.connect()
        lidar.motor_speed = 1
        
        return lidar
    
    def get_coordinates(self, angle: float, distance: float):
    #c = {'angle': 90, 'dist': distance}
    #a = {'angle': angle, 'dist': math.sin(angle) * distance}
    #b = {'angle': 90 - angle, 'dist': math.sin(90 - angle) * distance}
        return np.array([math.sin(90 - angle) * distance, math.sin(angle) * distance, 0])

    def get_scan(self) -> dict:
        data = {}
        scanning = True
        num_scans = 3
        while scanning:
            self.lidar.reset() #reset so that it starts from 0
            try:
                for scan in self.lidar.iter_measures(max_buf_meas=5000):
                    new_scan, quality, angle, distance = scan
                    angle = round(angle)
                    distance = round(distance)
                    data[angle] += distance
                    
                    if new_scan:
                        num_scan -= 1
                        if num_scan <= 0:
                            # loop through every angle and average it out at the end
                            for i in range(361):
                                if not data[i]:
                                    continue
                                data[i] /= 3
                            scanning = False
                            break
            except KeyboardInterrupt:
                break
            except Exception as e:
                print(e)
                self.lidar = self.setup_lidar()
                continue
        
        return data


def setup_lidar() -> RPLidar:
    lidar = RPLidar("/dev/ttyUSB0")
    lidar.clean_input()
    print(lidar.get_info())
    print(lidar.get_health())
    lidar.connect()
    lidar.motor_speed = 1
    
    return lidar

    # for finding the properties and values since the docs arent that good
    for property, value in vars(lidar).items():
        print(property, ":", value)
    # for finding the library methods available
    print(dir(lidar))
    
def rotate_point_wrt_center(point_to_be_rotated, angle, center_point = (0,0)):
    xnew = math.cos(angle)*(point_to_be_rotated[0] - center_point[0]) - math.sin(angle)*(point_to_be_rotated[1] - center_point[1]) + center_point[0]
    ynew = math.sin(angle)*(point_to_be_rotated[0] - center_point[0]) + math.cos(angle)*(point_to_be_rotated[1] - center_point[1]) + center_point[1]
    
    return (xnew, ynew)

def get_coordinates(angle: float, distance: float):
    #c = {'angle': 90, 'dist': distance}
    #a = {'angle': angle, 'dist': math.sin(angle) * distance}
    #b = {'angle': 90 - angle, 'dist': math.sin(90 - angle) * distance}
    coord = [-(math.sin(1.57 - angle) * distance), math.sin(angle) * distance, 0]
    x, y = rotate_point_wrt_center(coord, 3)
    return [x, y, 0]

if __name__ == "__main__":
    data = []
    plot = pv.Plotter()

    while True:
        try:
            lidar = setup_lidar()
        except RPLidarException:
            continue
        try:
            for scan in lidar.iter_measures(max_buf_meas=5000):
                #print(scan)
                new_scan, quality, angle, distance = scan
                
                if distance == 0.0:
                    continue
                
                angle = math.radians(angle)
                data.append(get_coordinates(angle, distance))
                
                if new_scan:
                    plot.clear()
                    plot.add_points(
                        np.array(data),
                        render_points_as_spheres=True,
                        point_size=10.0,
                        color='pink',
                    )
                    data = []
                    plot.show(interactive_update=True)
                    plot.update(100)

        except KeyboardInterrupt:
            print("size data:")
            print(len(data))
            break
        except Exception as e:
            print(e)
            lidar.clean_input()
            lidar.disconnect()
            continue
    lidar.stop()
    lidar.stop_motor()
    lidar.disconnect()
    print("end")
