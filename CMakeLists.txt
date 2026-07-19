cmake_minimum_required(VERSION 3.10)
project(MemoryCalculator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(MemoryCalculator 
    main_memory_calc.cpp 
    memory_calc.cpp 
    memory_calc.h
)
