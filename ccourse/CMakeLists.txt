cmake_minimum_required(VERSION 3.14 FATAL_ERROR)  # CMake version check
project(CCourse VERSION "0.0.1")                  # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)                        # Enable c++14 standard

include_directories(
	include/
)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(${PROJECT_NAME}_L01_helloworld
	src/L01/helloworld.c
)

add_executable(${PROJECT_NAME}_L02_picpoc
	src/L02/picpoc.c
)
add_executable(${PROJECT_NAME}_L03_test
	src/L03/test.c
)

SET(CMAKE_INSTALL_PREFIX "${CMAKE_CURRENT_LIST_DIR}")

install(
	TARGETS ${PROJECT_NAME}_L01_helloworld DESTINATION bin
	TARGETS ${PROJECT_NAME}_L02_picpoc DESTINATION bin
	TARGETS ${PROJECT_NAME}_L03_test DESTINATION bin
)