#include <windows.h>
#include <cstdlib>
#include <iostream>
#include <gl/glut.h>
#include <string.h>

using namespace std;

void Inicializa(void) {
    glClearColor(1.0, 1.0, 1.0, 0.0); // Color de la ventana
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-400.0, 400.0, -400.0, 400.0);
}

void Dibuja(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    // Lineas
    glColor3f(1.0, 0.0, 1.0);  // Color morado
    glBegin(GL_LINES);
        glVertex2i(-350, 0);
        glVertex2i(350, 0);
        glVertex2i(-150, -300);
        glVertex2i(-150, 300);
        glVertex2i(125, 300);
        glVertex2i(125, -300);
    glEnd();

//ANADALAY INICIALES
    glColor3f(1.0, 0.2, 0.6);  // Color rosa
    // Letra "A" Parte Externa - ANADALAY
    glLineWidth(3);
    glBegin(GL_LINE_LOOP);
        glVertex2i(-290, 90);
        glVertex2i(-275, 240);
        glVertex2i(-265, 240);
        glVertex2i(-250, 90);
        glVertex2i(-260, 90);
        glVertex2i(-265, 120);
        glVertex2i(-275, 120);
        glVertex2i(-280, 90);
    glEnd();

     // Letra "A" Parte Interna - ANADALAY
    glBegin(GL_LINE_LOOP);
        glVertex2i(-270, 210);
        glVertex2i(-275, 140);
        glVertex2i(-265, 140);
    glEnd();

    // Letra "L" - ANADALAY
    glBegin(GL_LINE_LOOP);
        glVertex2i(-245, 90);
        glVertex2i(-245, 240);
        glVertex2i(-235, 240);
        glVertex2i(-235, 120);
        glVertex2i(-220, 120);
        glVertex2i(-220, 90);
    glEnd();

 // Letra "L" - ANADALAY
    glBegin(GL_LINE_LOOP);
        glVertex2i(-215, 90);
        glVertex2i(-215, 240);
        glVertex2i(-205, 240);
        glVertex2i(-205, 120);
        glVertex2i(-190, 120);
        glVertex2i(-190, 90);
    glEnd();

//JANAHI INICIALES
    glColor3f(1.0, 1.0, 0.0);
    //Letra "M" - JANAHI
    glBegin(GL_LINE_LOOP);
        glVertex2i(-130,240);
        glVertex2i(-110,240);
        glVertex2i(-90,200);
        glVertex2i(-70,240);
        glVertex2i(-50,240);
        glVertex2i(-50,90);
        glVertex2i(-70,90);
        glVertex2i(-70,170);
        glVertex2i(-90,140);
        glVertex2i(-110,170);
        glVertex2i(-110,90);
        glVertex2i(-130,90);
        glEnd();

         //Letra "J" - JANAHI
        glBegin(GL_LINE_LOOP);
        glVertex2i(-40,150);
        glVertex2i(-30,150);
        glVertex2i(-30,110);
        glVertex2i(-15,110);
        glVertex2i(-15,240);
        glVertex2i(-5,240);
        glVertex2i(-5,90);
        glVertex2i(-40,90);
        glEnd();

        // Letra "A" Parte Externa - JANAHI
    glBegin(GL_LINE_LOOP);
        glVertex2i(0,90);
        glVertex2i(15,240);
        glVertex2i(25,240);
        glVertex2i(40,90);
        glVertex2i(30,90);
        glVertex2i(25,120);
        glVertex2i(15,120);
        glVertex2i(10,90);
    glEnd();
    // Letra "A" Parte Interna - JANAHI
    glBegin(GL_LINE_LOOP);
        glVertex2i(20, 210);
        glVertex2i(15, 140);
        glVertex2i(25, 140);
    glEnd();

     //Letra "P" - JANAHI
        glBegin(GL_LINE_LOOP);
        glVertex2i(50,90);
        glVertex2i(50,240);
        glVertex2i(100,240);
        glVertex2i(100,160);
        glVertex2i(70,160);
        glVertex2i(70,90);
        glEnd();

        // Letra "P" Parte Interna - JANAHI
    glBegin(GL_LINE_LOOP);
        glVertex2i(70, 180);
        glVertex2i(70, 220);
        glVertex2i(90, 220);
        glVertex2i(90, 180);

    glEnd();

// ALAN INICIALES
 glColor3f(1.0, 0.0, 0.0);
    //Letra "A" - ALAN
    glBegin(GL_LINE_LOOP);
        glVertex2i(160,60);
        glVertex2i(173, 210);
        glVertex2i(180, 210);
        glVertex2i(192, 60);
        glVertex2i(185, 60);
        glVertex2i(182, 92);
        glVertex2i(170, 92);
        glVertex2i(167, 60);
        glVertex2i(160, 60);
    glEnd();

    glBegin(GL_LINE_LOOP);
        glVertex2i(170, 120);
        glVertex2i(182, 120);
        glVertex2i(176, 182);
    glEnd();

    //Letra "J" - ALAN
    glBegin(GL_LINE_LOOP);
        glVertex2i(195,60);
        glVertex2i(195, 115);
        glVertex2i(205, 115);
        glVertex2i(205, 90);
        glVertex2i(212, 90);
        glVertex2i(212, 210);
        glVertex2i(222, 210);
        glVertex2i(222, 60);
        glVertex2i(195, 60);
    glEnd();

    //Letra "P" - ALAN
    glBegin(GL_LINE_LOOP);
        glVertex2i(225, 212);
        glVertex2i(240, 212);
        glVertex2i(245, 195);
        glVertex2i(247, 180);
        glVertex2i(247, 155);
        glVertex2i(245, 145);
        glVertex2i(240, 110);
        glVertex2i(232, 110);
        glVertex2i(232, 60);
        glVertex2i(225, 60);
        glVertex2i(225, 212);
    glEnd();

    glBegin(GL_LINE_LOOP);
        glVertex2i(233, 182);
        glVertex2i(240, 182);
        glVertex2i(240, 140);
        glVertex2i(233, 140);
    glEnd();

    //Letra "C" - ALAN
    glBegin(GL_LINE_LOOP);
        glVertex2i(277, 60);
        glVertex2i(257, 60);
        glVertex2i(255, 62);
        glVertex2i(255, 208);
        glVertex2i(257, 210);
        glVertex2i(277, 210);
        glVertex2i(277, 180);
        glVertex2i(268, 180);
        glVertex2i(266, 177);
        glVertex2i(266, 92);
        glVertex2i(268, 90);
        glVertex2i(277, 90);
    glEnd();

//ABIGAIL INICIALES
    //Letra "A" - ABIGAIL
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_LINE_LOOP);
        glVertex2i(-290,-200);
        glVertex2i(-275,-50);
        glVertex2i(-265,-50);
        glVertex2i(-250,-200);
        glVertex2i(-260,-200);
        glVertex2i(-265,-160);
        glVertex2i(-275,-160);
        glVertex2i(-280,-200);
    glEnd();
    // Letra "A" Parte Interna - ABIGAIL
    glBegin(GL_LINE_LOOP);
        glVertex2i(-265, -140);
        glVertex2i(-275, -140);
        glVertex2i(-270, -80);

    glEnd();

    //Letra "C" - ABIGAIL
    glBegin(GL_LINE_LOOP);
        glVertex2i(-240,-200);
        glVertex2i(-240,-50);
        glVertex2i(-210,-50);
        glVertex2i(-210,-90);
        glVertex2i(-225,-90);
        glVertex2i(-225,-160);
        glVertex2i(-210,-160);
        glVertex2i(-210,-200);
    glEnd();

     //Letra "G" - ABIGAIL
    glBegin(GL_LINE_LOOP);
        glVertex2i(-200,-200);
        glVertex2i(-200,-50);
        glVertex2i(-170,-50);
        glVertex2i(-170,-80);
        glVertex2i(-190,-80);
        glVertex2i(-190,-180);
        glVertex2i(-175,-180);
        glVertex2i(-175,-165);
        glVertex2i(-185,-165);
        glVertex2i(-185,-150);
        glVertex2i(-170,-150);
        glVertex2i(-170,-200);
    glEnd();

//JONATHAN INICIALES
    glColor3f(0.0, 1.0, 1.0);
    //Letra "J" - JONATHAN
    glBegin(GL_LINE_LOOP);
        glVertex2i(-120,-200);
        glVertex2i(-120,-140);
        glVertex2i(-110,-140);
        glVertex2i(-110,-180);
        glVertex2i(-90,-180);
        glVertex2i(-90,-50);
        glVertex2i(-80,-50);
        glVertex2i(-80,-200);
    glEnd();

    //Letra "C" - JONATHAN
    glBegin(GL_LINE_LOOP);
        glVertex2i(-70,-200);
        glVertex2i(-70,-50);
        glVertex2i(-30,-50);
        glVertex2i(-30,-70);
        glVertex2i(-60,-70);
        glVertex2i(-60,-180);
        glVertex2i(-30,-180);
        glVertex2i(-30,-200);
    glEnd();

     //Letra "M" - JONATHAN
    glBegin(GL_LINE_LOOP);
        glVertex2i(-20,-200);
        glVertex2i(-20,-50);
        glVertex2i(-0,-50);
        glVertex2i(15,-70);
        glVertex2i(30,-50);
        glVertex2i(50,-50);
        glVertex2i(50,-200);
        glVertex2i(30,-200);
        glVertex2i(30,-110);
        glVertex2i(15,-130);
        glVertex2i(0,-110);
        glVertex2i(0,-200);

    glEnd();

//CARITA FELIZ
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_LINE_LOOP);
        glVertex2i(195, -90);
        glVertex2i(225, -90);
        glVertex2i(225, -120);
        glVertex2i(195, -120);
    glEnd();

    glBegin(GL_LINE_LOOP);
        glVertex2i(195, -150);
        glVertex2i(225, -150);
        glVertex2i(225, -180);
        glVertex2i(195, -180);
    glEnd();

      glBegin(GL_LINE_LOOP);
        glVertex2i(240, -40);
        glVertex2i(250, -110);
        glVertex2i(250, -170);
        glVertex2i(240, -230);
        glVertex2i(250, -230);
        glVertex2i(260, -170);
        glVertex2i(260, -110);
        glVertex2i(250, -40);
    glEnd();

       // Forzar el dibujado
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1300, 600);
    glutCreateWindow("Iniciales");
    Inicializa();
    glutDisplayFunc(Dibuja);
    glutMainLoop();
    return 0;
}
