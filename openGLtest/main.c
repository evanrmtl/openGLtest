//
// Created by evan on 13/09/24.
//
#include "main.h"

#include <stdio.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>


void init() {
    glClearColor(1.0,1.0,0.0,1.0);
}

int main(int argc, char *argv[]) {
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowPosition(W_XPOSITION,W_YPOSITION);
    glutInitWindowSize(W_WIDTH,W_HEIGHT);
    glutCreateWindow("first openGL test");

    glutDisplayFunc(display);

    init();

    glutMainLoop();

    return 0;
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glFlush();
}

void reshape(int w, int y) {
    glViewport(0,0,w,y);
}


