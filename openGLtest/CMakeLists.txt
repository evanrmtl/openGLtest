cmake_minimum_required(VERSION 3.10)
project(openGLtest)

set(CMAKE_C_STANDARD 11)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

add_executable(openGLtest main.c)

target_link_libraries(openGLtest OpenGL::GL GLUT::GLUT)
