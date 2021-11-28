cmake_minimum_required(VERSION 3.19)

project(carClass)

file(GLOB carClass_SRC
     "*.hpp"
     "*.cpp"
)

add_executable(carClass ${carClass_SRC})

source_group(src FILES ${carClass_SRC})

set_target_properties(
    carClass PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)
