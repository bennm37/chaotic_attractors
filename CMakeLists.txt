cmake_minimum_required(VERSION 3.23.1)
project(attractors)
set(CMAKE_CXX_STANDARD 17)
list(APPEND CMAKE_PREFIX_PATH /opt/homebrew/Cellar/sfml/2.5.1_1/lib/cmake)

# add_library(lorenz main.cpp LorenzAttractor.cpp LorenzAttractor.h vectormath.h)
find_package(SFML COMPONENTS system network audio window graphics)
add_executable(lorenz main.cpp LorenzAttractor.cpp LorenzAttractor.h vectormath.h)
target_link_libraries(lorenz sfml-graphics sfml-window sfml-system sfml-network sfml-audio ) 

