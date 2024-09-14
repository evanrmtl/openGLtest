//
// Created by evan on 13/09/24.
//
#include "main.h"

#include <stdio.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>


void init() {
    glClearColor(0.0,0.0,0.0,1.0);
}

int main(int argc, char *argv[]) {
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowPosition(W_XPOSITION,W_YPOSITION);
    glutInitWindowSize(W_WIDTH,W_HEIGHT);
    glutCreateWindow("first openGL test");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    init();

    glutMainLoop();

    return 0;
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    //draw
    glBegin(GL_QUADS);

    glVertex2f(2.5,-2.5);
    glVertex2f(-2.5,-2.5);
    glVertex2f(-2.5,2.5);
    glVertex2f(2.5,2.5);

    glEnd();

    glFlush();
}

void reshape(int w, int y) {
    glViewport(0,0,w,y);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10.0,10.0,-10.0,10.0);
    glMatrixMode(GL_MODELVIEW);


}


