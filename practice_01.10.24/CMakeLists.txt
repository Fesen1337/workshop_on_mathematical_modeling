cmake_minimum_required(VERSION 3.16)
project(find_volume CXX)

find_package(INMOST)

add_executable(find_volume find_volume.cpp)

target_link_libraries(find_volume PUBLIC ${INMOST_LIBRARIES})
target_include_directories(find_volume PUBLIC ${INMOST_INCLUDE_DIRS})
