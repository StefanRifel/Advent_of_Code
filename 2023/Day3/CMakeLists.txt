cmake_minimum_required(VERSION 3.15)
project(Day3 VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(Day3 main.cc Engine.cc Engine.hh Number.cc Number.hh Symbol.cc Symbol.hh)

add_custom_target(copy_file
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/input.txt ${CMAKE_CURRENT_BINARY_DIR}/input.txt
)

add_dependencies(${PROJECT_NAME} copy_file)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
