cmake_minimum_required( VERSION 3.10 )

# Enable C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

#set( CMAKE_BUILD_TYPE Release )
set( CMAKE_BUILD_TYPE Debug )

set( OpenCV_DIR 
/home/elizabeth/Documents/CG/Descarga/opencv-4.6.0)
#/home/eduardo/Documents/Manuel/sdk/OpenCV/installation/OpenCV-master/lib/cmake/opencv4 )
#D:/sdk/OpenCV/opencv/build_vc14_x86/install)

message( "build mode is: ${CMAKE_BUILD_TYPE}" )

project( OpenCV_Projects )
message( "Configuring main application:  ${PROJECT_NAME} " )

#find_package( OpenCV REQUIRED core imgproc highgui )
find_package( OpenCV REQUIRED )
find_package( Threads REQUIRED )

if ( WIN32 )
	message( "CONFIGURING FOR WINDOWS" )

else()
	message( "CONFIGURING FOR LINUX" )
	
endif()

add_subdirectory( src )

