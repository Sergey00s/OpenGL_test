#include <stdio.h>
#include <OpenGL/gl.h>
#include <GLUT/glut.h>



//gcc -framework OpenGL -framework GLUT main.c -o opengl_program -Wno-deprecated-declarations


void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    glBegin(GL_LINES);
    glVertex2f(-0.5, 0.0);
    glVertex2f(0.5, 0.0);
    glEnd();
    
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL Düz Çizgi Örneği");
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
