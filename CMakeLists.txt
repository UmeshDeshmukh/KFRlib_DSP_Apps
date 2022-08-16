cmake_minimum_required(VERSION 3.10)

# Binary output directories
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${PROJECT_BINARY_DIR}/bin)
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${PROJECT_BINARY_DIR}/bin)

# file(MAKE_DIRECTORY ${PROJECT_BINARY_DIR}/svg)
project(examplePrjct)
add_subdirectory(kfr)

# Add header-only KFR to your executable or library, this sets include directories etc
#target_link_libraries(your_executable_or_library kfr)

# Add KFR DFT to your executable or library, (cpp file will be built for this)
#target_link_libraries(your_executable_or_library kfr_dft)

# Add KFR IO to your executable or library, (cpp file will be built for this)
#target_link_libraries(your_executable_or_library kfr_io)
add_executable(example example.cpp)
target_link_libraries(example kfr )
