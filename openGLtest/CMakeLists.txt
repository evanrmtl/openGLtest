cmake_minimum_required(VERSION 3.10)
project(openGLtest)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
find_package(GLU REQUIRED)  # Ajout de GLU

add_executable(openGLtest main.c)

target_link_libraries(openGLtest
        OpenGL::GL
        GLUT::GLUT
        /usr/lib/x86_64-linux-gnu/libGLU.so  # Chemin direct vers GLU
)