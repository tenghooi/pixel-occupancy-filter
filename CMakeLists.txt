cmake_minimum_required(VERSION 3.10)

project(pixel-occupancy-filter VERSION 0.1)

find_package(OpenCV REQUIRED)

include_directories("${OpenCV_INCLUDE_DIRS}"
                    "${PROJECT_SOURCE_DIR}/include")

add_executable(main src/main.cpp
                    src/pixel.cpp
                    src/utils.cpp)

target_link_libraries(main 
                      ${OpenCV_LIBS})