cmake_minimum_required (VERSION 3.17)

set(CMAKE_CXX_STANDARD 20)

find_package(SDL2 CONFIG REQUIRED)
find_package(SDL2-image CONFIG REQUIRED)

add_executable (UBVSR "UBVSR.cpp" "UBVSR.hpp" "Window.hpp" "Window.cpp")

target_link_libraries(UBVSR SDL2::SDL2 SDL2::SDL2main SDL2::SDL2_image)