cmake_minimum_required(VERSION 4.2)
project(untitled C)

set(CMAKE_C_STANDARD 99)

set(CMAKE_C_STANDARD_REQUIRED ON)

add_compile_options(-finput-charset=UTF-8)
add_compile_options(-fexec-charset=UTF-8)

add_executable(untitled
        "Data Strictures and Algorithms/array.c"
        "Data Strictures and Algorithms/loop_control.c"
        "Data Strictures and Algorithms/Common algorithms for arrays.c"
        "Data Strictures and Algorithms/pointer.c"
)
