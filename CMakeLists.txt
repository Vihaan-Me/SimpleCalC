cmake_minimum_required(VERSION 3.16)

project(CalculatorProject)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_library(calculator
    src/Calculator.cpp
)

add_executable(calculatorProject
    src/main.cpp
)

target_link_libraries(calculatorProject calculator)

enable_testing()

add_subdirectory(tests)