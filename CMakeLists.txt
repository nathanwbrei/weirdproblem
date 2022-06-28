
cmake_minimum_required(VERSION 3.9)
project(surrogate_toolkit VERSION 0.0.1)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)   # Enable -fPIC for all targets

# Set default standard to C++14, but allow user to override at command line
if(NOT "${CMAKE_CXX_STANDARD}")
    set(CMAKE_CXX_STANDARD 20)
endif()


find_package(JANA REQUIRED)
find_package(Torch REQUIRED)
find_package(Threads REQUIRED)

set(MAGNETIC_FIELD_MAP_SOURCES
        magnetic_field_map.cpp
        )

add_executable(phasm-example-magfieldmap ${MAGNETIC_FIELD_MAP_SOURCES})
target_include_directories(phasm-example-magfieldmap PUBLIC
        ${JANA_INCLUDE_DIR}
        )
target_link_libraries(phasm-example-magfieldmap ${JANA_LIBRARY} Threads::Threads dl)
#target_link_libraries(phasm-example-magfieldmap ${TORCH_LIBRARIES})

