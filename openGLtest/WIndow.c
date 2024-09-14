//
// Created by evan on 14/09/24.
//
#include <GL/glut.h>
#include "WIndow.h"

void iWindow() {
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowPosition(W_XPOSITION,W_YPOSITION);
    glutInitWindowSize(W_WIDTH,W_HEIGHT);
    glutCreateWindow("first openGL test");
}

void reshape(int w, int y) {
    glViewport(0,0,w,y);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glFlush();
}