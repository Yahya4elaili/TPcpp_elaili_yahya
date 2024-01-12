cmake_minimum_required(VERSION 3.26)
project(zootp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(zootp
        Animal.cpp
        Animal.h
        Mammal.h
        Bird.cpp
        Zoo.h
        Mammal.cpp
        Zoo.cpp
        Main.cpp
        Reptile.h
        Reptile.cpp
        KNNString.h
        KNNDouble.h
        KNN.cpp)
