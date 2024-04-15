# Install script for directory: /home/robsoc3/vtk-2/source/Wrapping/Python

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/generate_pyi.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtk.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/__init__.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/all.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/gtk" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/gtk/GtkGLExtVTKRenderWindow.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/gtk" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/gtk/GtkGLExtVTKRenderWindowInteractor.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/gtk" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/gtk/GtkVTKRenderWindow.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/gtk" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/gtk/GtkVTKRenderWindowInteractor.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/gtk" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/gtk/__init__.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/numpy_interface" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/numpy_interface/__init__.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/numpy_interface" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/numpy_interface/algorithms.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/numpy_interface" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/numpy_interface/dataset_adapter.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/numpy_interface" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/numpy_interface/internal_algorithms.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/qt" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/qt/QVTKRenderWindowInteractor.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/qt" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/qt/__init__.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/test" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/test/BlackBox.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/test" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/test/ErrorObserver.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/test" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/test/Testing.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/test" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/test/rtImageTest.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/test" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/test/__init__.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/tk" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/tk/__init__.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/tk" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/tk/vtkLoadPythonTkWidgets.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/tk" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/tk/vtkTkImageViewerWidget.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/tk" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/tk/vtkTkPhotoImage.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/tk" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/tk/vtkTkRenderWidget.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/tk" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/tk/vtkTkRenderWindowInteractor.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/util" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/util/__init__.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/util" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/util/colors.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/util" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/util/keys.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/util" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/util/misc.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/util" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/util/numpy_support.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/util" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/util/pickle_support.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/util" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/util/vtkAlgorithm.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/util" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/util/vtkConstants.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/util" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/util/vtkImageExportToArray.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/util" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/util/vtkImageImportFromArray.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/util" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/util/vtkMethodParser.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/util" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/util/vtkVariant.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/wx" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/wx/__init__.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/wx" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/wx/wxVTKRenderWindow.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "python" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./vtkmodules/wx" TYPE FILE FILES "/home/robsoc3/vtk-2/build/./vtkmodules/wx/wxVTKRenderWindowInteractor.py")
endif()

