import numpy as np
import cv2
import vtk
import pyvista as pv # try installing this, need vtk library
from pyvista import examples
from rplidar import RPLidar

lidar = RPLidar('/dev/ttyUSB0')

info = lidar.get_info()
print(info)

health = lidar.get_health()
print(health)

lidar.connect()
lidar.start_motor()

# for finding the properties and values since the docs arent that good
for property, value in vars(lidar).items():
    print(property, ":", value)
# for finding the library methods available
print(dir(lidar))

plot = pv.Plotter()

try:
    data = np.array([])
    
    angles_dists = {45: 0, 90: 0, 135: 0, 180: 0,
                    225: 0, 270: 0, 315: 0, 360: 0}
    total_dist = 0
    for scan in lidar.iter_scans(max_buf_meas=3000, min_len=5):
        # one scan is one whole loop of the lidar, getting data from 0 to 360 degrees
        print(np.array(scan)[0:5, :])
        
        #data = np.append(data, [scan])
        plot.add_points(np.array(scan))
        
        
except KeyboardInterrupt:
    print("data is:")
    print(data)
    pass
    

#plot.add_points(data)
plot.show()
    
lidar.stop()
lidar.stop_motor()
lidar.disconnect()
print("end")
