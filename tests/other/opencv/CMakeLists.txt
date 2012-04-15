cmake_minimum_required(VERSION 2.6)
project (photo_cut)

find_package(opencv REQUIRED)
find_package(boost REQUIRED)
# set(opencv_USE_STATIC_LIBS OFF)

include_directories(${opencv_INCLUDE_DIRS})
link_directories(${opencv_LIBRARY_DIRS})
link_libraries(opencv_core220 opencv_highgui220)
set (SRCS photo_cut.cpp)
add_executable (photo_cut ${SRCS})
