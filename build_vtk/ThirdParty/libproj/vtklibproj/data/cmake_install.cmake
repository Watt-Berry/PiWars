# Install script for directory: /home/robsoc3/vtk-2/source/ThirdParty/libproj/vtklibproj/data

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "libproj-data" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/vtk-9.3.0.data/share/vtk-9.3/proj" TYPE FILE FILES
    "/home/robsoc3/vtk-2/source/ThirdParty/libproj/vtklibproj/data/proj.ini"
    "/home/robsoc3/vtk-2/source/ThirdParty/libproj/vtklibproj/data/world"
    "/home/robsoc3/vtk-2/source/ThirdParty/libproj/vtklibproj/data/other.extra"
    "/home/robsoc3/vtk-2/source/ThirdParty/libproj/vtklibproj/data/nad27"
    "/home/robsoc3/vtk-2/source/ThirdParty/libproj/vtklibproj/data/GL27"
    "/home/robsoc3/vtk-2/source/ThirdParty/libproj/vtklibproj/data/nad83"
    "/home/robsoc3/vtk-2/source/ThirdParty/libproj/vtklibproj/data/nad.lst"
    "/home/robsoc3/vtk-2/source/ThirdParty/libproj/vtklibproj/data/CH"
    "/home/robsoc3/vtk-2/source/ThirdParty/libproj/vtklibproj/data/ITRF2000"
    "/home/robsoc3/vtk-2/source/ThirdParty/libproj/vtklibproj/data/ITRF2008"
    "/home/robsoc3/vtk-2/source/ThirdParty/libproj/vtklibproj/data/ITRF2014"
    "/home/robsoc3/vtk-2/build/build/lib.linux-aarch64-cpython-311/vtkmodules/../../../vtk-9.3.0.data/share/vtk-9.3/proj/proj.db"
    "/home/robsoc3/vtk-2/source/ThirdParty/libproj/vtklibproj/data/deformation_model.schema.json"
    "/home/robsoc3/vtk-2/source/ThirdParty/libproj/vtklibproj/data/projjson.schema.json"
    "/home/robsoc3/vtk-2/source/ThirdParty/libproj/vtklibproj/data/triangulation.schema.json"
    )
endif()

