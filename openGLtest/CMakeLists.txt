cmake_minimum_required(VERSION 3.29)
project(rayCasting C)

set(CMAKE_C_STANDARD 11)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

add_executable(rayCasting main.c
        main.h
        WIndow.c
        WIndow.h)

# Lier les bibliothèques OpenGL, GLUT et GLU directement
target_link_libraries(rayCasting PRIVATE OpenGL::GL GLUT::GLUT GLU)