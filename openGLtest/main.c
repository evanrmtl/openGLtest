//
// Created by evan on 13/09/24.
//
#include "main.h"

#include <stdio.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>


int main(int argc, char *argv[]) {
    glutInit(&argc, argv);
    iWindow();
    glutDisplayFunc(display);
    glutMainLoop();


    char map[10][14] ={
        "111111111111",
        "100000000001",
        "100000000001",
        "111110001111",
        "100000001111",
        "100000001111",
        "101111111111",
        "100000000001",
        "100000000001",
        "111111111111"
    };


    return 0;
}


void printMap(const char map[10][14]) {

}
