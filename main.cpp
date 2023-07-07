#include<stdio.h>
#include <stdlib.h>
#include<GLUT/GLUT.h>
#include<math.h>
#define PI 3.1416



GLfloat a=0,b=0,c=0,d=0,e=0;

void building();
void building2();
void outline();
void blast();
void road();
void display2();
void display3();
void display4();
void display5();
void display6();
void display7();
void display8();
void display9();
void display10();
void build_outline();
void build_outline2();
void trees();
void mountain();
int i;
float a1=0;
float x=100,y=0,r=0.5,y11=0,y21=0,y31=0,y41=0,y51=0,y61=0,y71=0,y81=0,y91=0,y10=0,y12=0,y13=0,y14=0,x0=0,xo=0,  pi=3.142;
GLfloat rotation = 90.0;
float posX = 0, posY = 0, posZ = 0;
float move_unit = 3;
float rate = 1.0f;
float angle = -0.0f;
float RotateX = 0.f, RotateY = 45.f;



char s[20]="PRESS S TO START";
char s1[100]="Maximize window for better view----->>";
char s2[100]="Dayananda Sagar Academy of Technology and Management";
char s3[150]="DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING";
char s4[20]="Mini Project";
char s5[50]="PLANE CRASH SIMULATION";
char s6[200]="BY- ABHISHEK HN & TARUN KARKERA";
char s7[200]="Under the Guidence of :Mrs.JHANVI SHANKAR";
char s8[50]="Dept. of CSE";
char s9[100]="PRESS Q TO EXIT";
char texta[]={"BOOOOOM!!"};
int j;

int flag=0;

void update(int value)
{
    a+=0.0;    //Plane position takeoff on x axis
    b-=0.0;    //Road Strip backward movement
    c+=0;    //take off at certain angle on y axis

    if(b<=-78.0)// moving of run way
        b=0.0;

    glutPostRedisplay();
    glutTimerFunc(200,update,0);//delay
}
void House1(){

//House1

   glColor3f( 0.7 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(26.8 ,185);
   glVertex2f(36.8 ,185);
   glVertex2f(36.8 ,205);
   glVertex2f(26.8 ,205);
   glEnd();

   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(27.3 ,194);
   glVertex2f(30.8 ,194);
   glVertex2f(30.8 ,204.3);
   glVertex2f(27.3 ,204.3);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(29 ,194);
   glVertex2f(29.1 ,194);
   glVertex2f(29.1 ,204.3);
   glVertex2f(29 ,204.3);
   glEnd();

   glColor3f( 1.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(27.3 ,199.3);
   glVertex2f(30.8 ,199.3);
   glVertex2f(30.8 ,200);
   glVertex2f(27.3 ,200);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(27.3 ,196.95);
   glVertex2f(30.8 ,196.95);
   glVertex2f(30.8 ,196.55);
   glVertex2f(27.3 ,196.55);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(27.3 ,200.70);
   glVertex2f(30.8 ,200.70);
   glVertex2f(30.8 ,200.85);
   glVertex2f(27.3 ,200.85);
   glEnd();



   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(33 ,194);
   glVertex2f(36.3 ,194);
   glVertex2f(36.3 ,204.3);
   glVertex2f(33 ,204.3);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(34.65 ,194);
   glVertex2f(34.72 ,194);
   glVertex2f(34.72 ,204.3);
   glVertex2f(34.65 ,204.3);
   glEnd();

   glColor3f( 1.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(33 ,199.3);
   glVertex2f(36.3 ,199.3);
   glVertex2f(36.3 ,200);
   glVertex2f(33 ,200);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(33 ,201.70);
   glVertex2f(36.3 ,201.70);
   glVertex2f(36.3 ,201.85);
   glVertex2f(33 ,201.85);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(33 ,196.65);
   glVertex2f(36.3 ,196.65);
   glVertex2f(36.3 ,196.55);
   glVertex2f(33 ,196.55);
   glEnd();

   //Door


   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(30.3 ,185);
   glVertex2f(33.7 ,185);
   glVertex2f(33.7 ,193);
   glVertex2f(30.3 ,193);
   glEnd();
}

void House3(){

//House3

   glColor3f( 0.2 ,0.0, 0.2);
   glBegin(GL_POLYGON);
   glVertex2f(114.3 ,285);
   glVertex2f(124.3 ,285);
   glVertex2f(124.3 ,305);
   glVertex2f(114.3 ,305);
   glEnd();

   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(114.8 ,294);
   glVertex2f(118.3 ,294);
   glVertex2f(118.3 ,295.7);
   glVertex2f(114.8 ,295.7);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(116.5 ,294);
   glVertex2f(116.6 ,294);
   glVertex2f(116.6 ,295.7);
   glVertex2f(116.5 ,295.7);
   glEnd();

   glColor3f( 1.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(114.8 ,299.3);
   glVertex2f(118.3 ,299.3);
   glVertex2f(118.3 ,300);
   glVertex2f(114.8 ,300);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(114.8 ,297);
   glVertex2f(118.3 ,297);
   glVertex2f(118.3 ,297);
   glVertex2f(114.8 ,297);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(114.8 ,298.25);
   glVertex2f(118.3 ,298.25);
   glVertex2f(118.3 ,301.95);
   glVertex2f(114.8 ,301.95);
   glEnd();



   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(120.5 ,294);
   glVertex2f(123.8 ,294);
   glVertex2f(123.8 ,304.3);
   glVertex2f(120.5 ,304.3);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(122.15 ,294);
   glVertex2f(122.22 ,294);
   glVertex2f(122.22 ,304.3);
   glVertex2f(122.15 ,304.3);
   glEnd();

   glColor3f( 1.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(120.5 ,299.3);
   glVertex2f(123.8 ,299.3);
   glVertex2f(123.8 ,300);
   glVertex2f(120.5 ,300);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(120.5 ,301.75);
   glVertex2f(123.8 ,301.75);
   glVertex2f(123.8 ,301.95);
   glVertex2f(120.5 ,301.95);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(120.5 ,297.35);
   glVertex2f(123.8 ,297.35);
   glVertex2f(123.8 ,297.45);
   glVertex2f(120.5 ,297.45);
   glEnd();

   //Door

   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(117.8 ,285);
   glVertex2f(121.2 ,285);
   glVertex2f(121.2 ,293);
   glVertex2f(117.8 ,293);
   glEnd();
}

void House4(){

//House4


    glPushMatrix();
//    glTranslatef(15.0f, 100.0f, 0.0f);
    //glRotatef(0, 0.0f, 0.0f, -1.0f);

    glColor3f( 0. ,0.1, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(214.3 ,185);
   glVertex2f(224.3 ,185);
   glVertex2f(224.3 ,205);
   glVertex2f(214.3 ,205);
   glEnd();

   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(214.8 ,194);
   glVertex2f(218.3 ,194);
   glVertex2f(218.3 ,204.3);
   glVertex2f(214.8 ,204.3);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(216.5 ,194);
   glVertex2f(216.6 ,194);
   glVertex2f(216.6 ,204.3);
   glVertex2f(216.5 ,204.3);
   glEnd();

   glColor3f( 1.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(214.8 ,199.3);
   glVertex2f(218.3 ,199.3);
   glVertex2f(218.3 ,200);
   glVertex2f(214.8 ,200);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(214.8 ,197);
   glVertex2f(218.3 ,197);
   glVertex2f(218.3 ,197);
   glVertex2f(214.8 ,197);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(214.8 ,201.75);
   glVertex2f(218.3 ,201.75);
   glVertex2f(218.3 ,201.95);
   glVertex2f(214.8 ,201.95);
   glEnd();



   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(220.5 ,194);
   glVertex2f(223.8 ,194);
   glVertex2f(223.8 ,204.3);
   glVertex2f(220.5 ,204.3);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(222.15 ,194);
   glVertex2f(222.22 ,194);
   glVertex2f(222.22 ,204.3);
   glVertex2f(222.15 ,204.3);
   glEnd();

   glColor3f( 1.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(220.5 ,199);
   glVertex2f(223.8 ,199);
   glVertex2f(223.8 ,200);
   glVertex2f(220.5 ,200);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(220.5 ,201.75);
   glVertex2f(223.8 ,201.75);
   glVertex2f(223.8 ,201.95);
   glVertex2f(220.5 ,201.95);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(220.5 ,196.35);
   glVertex2f(223.8 ,196.35);
   glVertex2f(223.8 ,196.45);
   glVertex2f(220.5 ,196.45);
   glEnd();

   //Door

   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(217.8 ,185);
   glVertex2f(221.2 ,185);
   glVertex2f(221.2 ,193);
   glVertex2f(217.8 ,193);
   glEnd();

    glPopMatrix();
}


void House9(){

//House4


    glPushMatrix();
//    glTranslatef(15.0f, 100.0f, 0.0f);
    //glRotatef(0, 0.0f, 0.0f, -1.0f);

    glColor3f( 0.7 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(414.3 ,185);
   glVertex2f(424.3 ,185);
   glVertex2f(424.3 ,205);
   glVertex2f(414.3 ,205);
   glEnd();

   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(414.8 ,194);
   glVertex2f(418.3 ,194);
   glVertex2f(418.3 ,204.3);
   glVertex2f(414.8 ,204.3);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(416.5 ,194);
   glVertex2f(416.6 ,194);
   glVertex2f(416.6 ,204.3);
   glVertex2f(416.5 ,204.3);
   glEnd();

   glColor3f( 1.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(414.8 ,199.3);
   glVertex2f(418.3 ,199.3);
   glVertex2f(418.3 ,200);
   glVertex2f(414.8 ,200);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(414.8 ,197);
   glVertex2f(418.3 ,197);
   glVertex2f(418.3 ,197);
   glVertex2f(414.8 ,197);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(414.8 ,201.75);
   glVertex2f(418.3 ,201.75);
   glVertex2f(418.3 ,201.95);
   glVertex2f(414.8 ,201.95);
   glEnd();



   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(420.5 ,194);
   glVertex2f(423.8 ,194);
   glVertex2f(423.8 ,204.3);
   glVertex2f(420.5 ,204.3);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(422.15 ,194);
   glVertex2f(422.22 ,194);
   glVertex2f(422.22 ,204.3);
   glVertex2f(422.15 ,204.3);
   glEnd();

   glColor3f( 1.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(420.5 ,199);
   glVertex2f(423.8 ,199);
   glVertex2f(423.8 ,200);
   glVertex2f(420.5 ,200);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(420.5 ,201.75);
   glVertex2f(423.8 ,201.75);
   glVertex2f(423.8 ,201.95);
   glVertex2f(420.5 ,201.95);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(420.5 ,196.35);
   glVertex2f(423.8 ,196.35);
   glVertex2f(423.8 ,196.45);
   glVertex2f(420.5 ,196.45);
   glEnd();

   //Door

   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(417.8 ,185);
   glVertex2f(421.2 ,185);
   glVertex2f(421.2 ,193);
   glVertex2f(417.8 ,193);
   glEnd();

    glPopMatrix();
}



void House8(){

//House3

   glColor3f( 0.2 ,0.0, 0.2);
   glBegin(GL_POLYGON);
   glVertex2f(314.3 ,285);
   glVertex2f(324.3 ,285);
   glVertex2f(324.3 ,305);
   glVertex2f(314.3 ,305);
   glEnd();

   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(314.8 ,294);
   glVertex2f(318.3 ,294);
   glVertex2f(318.3 ,295.7);
   glVertex2f(314.8 ,295.7);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(316.5 ,294);
   glVertex2f(316.6 ,294);
   glVertex2f(316.6 ,295.7);
   glVertex2f(316.5 ,295.7);
   glEnd();

   glColor3f( 1.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(314.8 ,299.3);
   glVertex2f(318.3 ,299.3);
   glVertex2f(318.3 ,300);
   glVertex2f(314.8 ,300);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(314.8 ,297);
   glVertex2f(318.3 ,297);
   glVertex2f(318.3 ,297);
   glVertex2f(314.8 ,297);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(314.8 ,298.25);
   glVertex2f(318.3 ,298.25);
   glVertex2f(318.3 ,301.95);
   glVertex2f(314.8 ,301.95);
   glEnd();



   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(320.5 ,294);
   glVertex2f(323.8 ,294);
   glVertex2f(323.8 ,304.3);
   glVertex2f(320.5 ,304.3);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(322.15 ,294);
   glVertex2f(322.22 ,294);
   glVertex2f(322.22 ,304.3);
   glVertex2f(322.15 ,304.3);
   glEnd();

   glColor3f( 1.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(320.5 ,299.3);
   glVertex2f(323.8 ,299.3);
   glVertex2f(323.8 ,300);
   glVertex2f(320.5 ,300);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(320.5 ,301.75);
   glVertex2f(323.8 ,301.75);
   glVertex2f(323.8 ,301.95);
   glVertex2f(320.5 ,301.95);
   glEnd();

   glColor3f( 0.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(320.5 ,297.35);
   glVertex2f(323.8 ,297.35);
   glVertex2f(323.8 ,297.45);
   glVertex2f(320.5 ,297.45);
   glEnd();

   //Door

   glColor3f( 1.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(317.8 ,285);
   glVertex2f(321.2 ,285);
   glVertex2f(321.2 ,293);
   glVertex2f(317.8 ,293);
   glEnd();
}


void stars()
{

//star1
    glPushMatrix();
glColor3f(1.0,1.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(405,463);
glVertex2f(400,455);
glVertex2f(410,455);
glVertex2f(405,452);
glVertex2f(400,460);
glVertex2f(410,460);
glEnd();


    glPushMatrix();
glColor3f(1.0,1.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(375,473);
glVertex2f(370,465);
glVertex2f(380,465);
glVertex2f(375,462);
glVertex2f(370,470);
glVertex2f(380,470);
glEnd();

    glPushMatrix();
glColor3f(1.0,1.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(345,463);
glVertex2f(340,455);
glVertex2f(350,455);
glVertex2f(345,452);
glVertex2f(340,460);
glVertex2f(350,460);
glEnd();
//2nd set
    glPushMatrix();
glColor3f(1.0,1.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(175,463);
glVertex2f(170,455);
glVertex2f(180,455);
glVertex2f(175,452);
glVertex2f(170,460);
glVertex2f(180,460);
glEnd();


    glPushMatrix();
glColor3f(1.0,1.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(145,473);
glVertex2f(140,465);
glVertex2f(150,465);
glVertex2f(145,462);
glVertex2f(140,470);
glVertex2f(150,470);
glEnd();

    glPushMatrix();
glColor3f(1.0,1.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(115,463);
glVertex2f(110,455);
glVertex2f(120,455);
glVertex2f(115,452);
glVertex2f(110,460);
glVertex2f(120,460);
glEnd();

/*//star2
glColor3f(1.0,1.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(975,643);
glVertex2f(970,635);
glVertex2f(980,635);
glVertex2f(975,632);
glVertex2f(970,640);
glVertex2f(980,640);
glEnd();

//star3
glColor3f(1.0,1.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(875,543);
glVertex2f(870,535);
glVertex2f(880,535);
glVertex2f(875,532);
glVertex2f(870,540);
glVertex2f(880,540);
glEnd();

//star4
glColor3f(1.0,1.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(375,598);
glVertex2f(370,590);
glVertex2f(380,590);
glVertex2f(375,587);
glVertex2f(370,595);
glVertex2f(380,595);
glEnd();

//star5
glColor3f(1.0,1.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(750,628);
glVertex2f(745,620);
glVertex2f(755,620);
glVertex2f(750,618);
glVertex2f(745,625);
glVertex2f(755,625);
glEnd();

//star6
glColor3f(1.0,1.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(200,628);
glVertex2f(195,620);
glVertex2f(205,620);
glVertex2f(200,618);
glVertex2f(195,625);
glVertex2f(205,625);
glEnd();

//star7
glColor3f(1.0,1.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(100,528);
glVertex2f(95,520);
glVertex2f(105,520);
glVertex2f(100,518);
glVertex2f(95,525);
glVertex2f(105,525);
glEnd();

//star8
glColor3f(1.0,1.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(300,468);
glVertex2f(295,460);
glVertex2f(305,460);
glVertex2f(300,458);
glVertex2f(295,465);
glVertex2f(305,465);
glEnd();

//star9
glColor3f(1.0,1.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(500,543);
glVertex2f(495,535);
glVertex2f(505,535);
glVertex2f(500,532);
glVertex2f(495,540);
glVertex2f(505,540);
glEnd();*/
    glPopMatrix();
}
void ship()
{
    glBegin(GL_QUADS);
        glColor3f(1.0f,1.0f,1.0f); //ship body front
        glVertex2d(190.0f,300.0f);
        glVertex2d(187.0f,307.0f);
        glVertex2d(220.0f,307.0f);
        glVertex2d(218.0f,300.0f);

        glColor3f(0.0f,1.0f,0.0f); //green box front
        glVertex2d(200.0f,307.0f);
        glVertex2d(200.0f,311.0f);
        glVertex2d(210.0f,311.0f);
        glVertex2d(210.0f,307.0f);

        glColor3f(0.0f,0.0f,1.0f); //blue box front
        glVertex2d(201.0f,309.0f);
        glVertex2d(201.0f,313.0f);
        glVertex2d(209.0f,313.0f);
        glVertex2d(209.0f,309.0f);

        glColor3f(1.0f,0.0f,0.0f); //red stand front
        glVertex2d(204.0f,309.0f);
        glVertex2d(204.0f,317.0f);
        glVertex2d(206.0f,317.0f);
        glVertex2d(206.0f,309.0f);

        glEnd();
        glPopMatrix();

}
void ship1()
{
    glBegin(GL_QUADS);
        glColor3f(1.0f,0.0f,0.0f); //ship body front
        glVertex2d(390.0f,300.0f);
        glVertex2d(387.0f,307.0f);
        glVertex2d(420.0f,307.0f);
        glVertex2d(418.0f,300.0f);

        glColor3f(0.0f,1.0f,0.0f); //green box front
        glVertex2d(400.0f,307.0f);
        glVertex2d(400.0f,309.0f);
        glVertex2d(410.0f,309.0f);
        glVertex2d(410.0f,307.0f);

        glColor3f(0.0f,0.0f,1.0f); //blue box front
        glVertex2d(401.0f,309.0f);
        glVertex2d(401.0f,311.0f);
        glVertex2d(409.0f,311.0f);
        glVertex2d(409.0f,309.0f);

        glColor3f(1.0f,0.0f,0.0f); //red stand front
        glVertex2d(404.0f,309.0f);
        glVertex2d(404.0f,315.0f);
        glVertex2d(406.0f,315.0f);
        glVertex2d(406.0f,309.0f);

        glEnd();
        glPopMatrix();

}



void Sun()
{

   float th;
   glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   for(int i=0;i<360;i++)
   {
       th=i*(3.1416/180);
       glVertex2f(300+40*cos(th),450+40*sin(th));
   }

   glEnd();

}

void Sun1()
{

   float th;
   glBegin(GL_POLYGON);
   glColor3f(0.8,0.8,0);
   for(int i=0;i<360;i++)
   {
       th=i*(3.1416/180);
       glVertex2f(300+40*cos(th),450+40*sin(th));
   }

   glEnd();

}

void Moon()
{

   float th;
   glBegin(GL_POLYGON);
   glColor3f(1.0,1.0,1.0);
   for(int i=0;i<360;i++)
   {
       th=i*(3.1416/180);
       glVertex2f(300+40*cos(th),400+40*sin(th));
   }

   glEnd();

}


void fish1()
{


glColor3f(1.0,0.0,0.0);
  glBegin(GL_POLYGON);
   glVertex2f(260,190);

   glVertex2f(290,165);

   glVertex2f(360,190);
   glVertex2f(290,215);
  glEnd();

glBegin(GL_POLYGON);

    glVertex2f(350,190);
    glColor3ub( rand()%1, rand()%1000, rand()%1000 );
   glVertex2f(395,210);
   glVertex2f(385,190);
   glVertex2f(395,167);
  glEnd();

  glBegin(GL_TRIANGLES);

  glColor3ub( rand()%1, rand()%1000, rand()%1000 );
    glVertex2f(292,213);
   glColor3f(1.0,0.0,0.0);
    glVertex2f(330,249);
    glVertex2f(310,200);
  glEnd();

glBegin(GL_TRIANGLES);

glColor3ub( rand()%1, rand()%1000, 0 );
    glVertex2f(292,168);
glColor3f(1.0,0.0,0.0);
    glVertex2f(330,140);
    glVertex2f(310,180);
  glEnd();


 glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(270,195);
  glEnd();
}

void fish2()
{
     glColor3f(1.0,0.0,0.0);
  glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,0.0);
     glVertex2f(70,145);
   glVertex2f(20,120);
  glColor3f(1.0,0.0,0.0);
    glVertex2f(30,145);
   glVertex2f(20,170);


  glEnd();
   // glColor3ub( rand()%1, rand()%1000, rand()%1000 );
    glColor3f( 0, 1, 0 );
    glBegin(GL_POLYGON);
   glVertex2f(65,145);

   glVertex2f(125,170);

   glVertex2f(165,145);
   glVertex2f(125,120);
  glEnd();

  glBegin(GL_TRIANGLES);
    glColor3ub( rand()%1, rand()%1000, rand()%1000 );
    glVertex2f(126,168);
   glColor3f(1.0,0.0,0.0);
   glVertex2f(110,155);
    glVertex2f(85,195);
 glEnd();
 glBegin(GL_TRIANGLES);
    glColor3ub( rand()%1, rand()%1000, 0 );
    glVertex2f(126,122);
   glColor3f(1.0,0.0,0.0);
    glVertex2f(110,136);
    glVertex2f(85,95);
  glEnd();




 glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(150,149);
  glEnd();

}
void fish3()
{


glColor3f(0.9,0.0,0.7);
  glBegin(GL_POLYGON);
   glVertex2f(260,75);

   glVertex2f(290,50);

   glVertex2f(360,75);
   glVertex2f(290,100);
  glEnd();

glBegin(GL_POLYGON);

    glVertex2f(350,75);
    glColor3f( 0, 1, 0 );
   glVertex2f(395,95);
   glVertex2f(385,75);
   glVertex2f(395,52);
  glEnd();

  glBegin(GL_TRIANGLES);

 // glColor3ub( rand()%1, rand()%1000, rand()%1000 );
  glColor3f( 0, 1, 0 );
    glVertex2f(292,98);
   glColor3f(1.0,0.0,0.0);
    glVertex2f(330,134);
    glVertex2f(310,85);
  glEnd();

glBegin(GL_TRIANGLES);

glColor3ub( rand()%1, rand()%1000, 0 );
    glVertex2f(292,53);
glColor3f(1.0,0.0,0.0);
    glVertex2f(330,25);
    glVertex2f(310,65);
  glEnd();


 glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(270,80);
  glEnd();
}



void plant()
{

glColor3ub( rand()%1, rand()%1000, rand()%1000 );
  glBegin(GL_POLYGON);
   glVertex2f(50,0);

   glVertex2f(30,40);
 glColor3f(1.0,1.0,0.0);
 glColor3ub( rand()%1, rand()%1000, rand()%1000 );
   glVertex2f(40,0);
  glVertex2f(65,60);
  glEnd();

  glColor3ub( rand()%1, rand()%1000, rand()%1000 );
  glBegin(GL_POLYGON);
   glVertex2f(90,0);

   glVertex2f(70,40);

 glColor3ub( rand()%1, rand()%1000, rand()%1000 );
   glVertex2f(80,0);
  glVertex2f(105,60);
  glEnd();
  glColor3f(0.0,1.0,0.0);
 glBegin(GL_POLYGON);
   glVertex2f(120,0);

   glVertex2f(100,45);

 glColor3ub( rand()%1, rand()%1000, rand()%1000 );
   glVertex2f(110,0);
  glVertex2f(135,65);
  glEnd();

  glColor3ub( rand()%1, rand()%1000, rand()%1000 );
  glBegin(GL_POLYGON);
   glVertex2f(140,0);

  glVertex2f(120,43);
 glColor3f(1.0,1.0,0.0);
   glVertex2f(130,0);
  glVertex2f(155,60);
  glEnd();

  glColor3ub( rand()%1, rand()%1000, rand()%1000 );
  glBegin(GL_POLYGON);
   glVertex2f(100,0);

   glVertex2f(80,40);

 glColor3ub( rand()%1, rand()%1000, rand()%1000 );
   glVertex2f(90,0);
  glVertex2f(105,50);
  glEnd();

  glColor3ub( rand()%1, rand()%1000, rand()%1000 );
  glBegin(GL_POLYGON);
   glVertex2f(70,0);

   glVertex2f(50,40);
   glColor3ub( rand()%1, rand()%1000, rand()%1000 );

   glVertex2f(60,0);
  glVertex2f(85,50);
  glEnd();
 glColor3ub( rand()%1, rand()%1000, rand()%1000 );
  glBegin(GL_POLYGON);
   glVertex2f(470,0);

   glVertex2f(450,40);
   glColor3ub( rand()%1, rand()%1000, rand()%1000 );

   glVertex2f(460,0);
  glVertex2f(485,50);
  glEnd();
 glColor3ub( rand()%1, rand()%1000, rand()%1000 );
  glBegin(GL_POLYGON);
   glVertex2f(490,0);

   glVertex2f(470,40);
   glColor3ub( rand()%1, rand()%1000, rand()%1000 );

   glVertex2f(480,0);
  glVertex2f(505,50);
  glEnd();
 glColor3ub( rand()%1, rand()%1000, rand()%1000 );
  glBegin(GL_POLYGON);
   glVertex2f(520,0);

   glVertex2f(500,40);
   glColor3ub( rand()%1, rand()%1000, rand()%1000 );

   glVertex2f(510,0);
  glVertex2f(535,50);
  glEnd();
 glColor3ub( rand()%1, rand()%1000, rand()%1000 );
  glBegin(GL_POLYGON);
   glVertex2f(540,0);

   glVertex2f(520,40);
   glColor3ub( rand()%1, rand()%1000, rand()%1000 );

   glVertex2f(530,0);
  glVertex2f(555,50);
  glEnd();
 glColor3ub( rand()%1, rand()%1000, rand()%1000 );
  glBegin(GL_POLYGON);
   glVertex2f(950,0);

   glVertex2f(930,40);
   glColor3ub( rand()%1, rand()%1000, rand()%1000 );

   glVertex2f(940,0);
  glVertex2f(965,50);
  glEnd();
glColor3ub( rand()%1, rand()%1000, rand()%1000 );
  glBegin(GL_POLYGON);
  glVertex2f(870,0);

   glVertex2f(850,40);
  glColor3ub( rand()%1, rand()%1000, rand()%1000 );

   glVertex2f(860,0);
  glVertex2f(885,50);
  glEnd();
}

void pb()
  {
     glBegin(GL_TRIANGLE_FAN);
      for(angle=0; angle<360.0; angle+=.1)
    {
        glColor3ub( rand()%10000, rand()%1, rand()%10);
            y =(sin(angle*pi/180)*45);
            x =(cos(angle*pi/180)*75);
            glVertex2f(x+250,y-10);

    }

glEnd();
}



void circle(GLdouble rad)
{
    GLint points = 50;
    GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
    GLdouble theta = 0.0;

    glBegin(GL_POLYGON);
    {
        for (i = 0; i <= 50; i++, theta += delTheta)
        {
            glVertex2f(rad * cos(theta), rad * sin(theta));
        }
    }
    glEnd();
}

void bush()
{
     glPushMatrix();//bush1

    glTranslatef(46, 200, 0);
    glColor3f(0,0.5,0);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(49, 203, 0);
   glColor3f(0,0.5,0);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(51, 200, 0);
    glColor3f(0,0.5,0);//25, 10.5, 0);
    circle(4);
    glPopMatrix();


     glPushMatrix();//bush2

    glTranslatef(146, 200, 0);
    glColor3f(0,0.5,0);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(149, 203, 0);
   glColor3f(0,0.5,0);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(151, 200, 0);
    glColor3f(0,0.5,0);//25, 10.5, 0);
    circle(4);
    glPopMatrix();


    glPushMatrix();//bush3

    glTranslatef(166, 250, 0);
    glColor3f(0,0.5,0);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(169, 253, 0);
   glColor3f(0,0.5,0);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(171, 250, 0);
    glColor3f(0,0.5,0);//25, 10.5, 0);
    circle(4);
    glPopMatrix();


      glPushMatrix();//bush3

    glTranslatef(366, 250, 0);
    glColor3f(0,0.5,0);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(369, 253, 0);
   glColor3f(0,0.5,0);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(371, 250, 0);
    glColor3f(0,0.5,0);//25, 10.5, 0);
    circle(4);
    glPopMatrix();


      glPushMatrix();//bush4

    glTranslatef(336, 220, 0);
    glColor3f(0,0.5,0);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(339, 223, 0);
   glColor3f(0,0.5,0);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(341, 220, 0);
    glColor3f(0,0.5,0);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

     glPushMatrix();//bush5

    glTranslatef(436, 220, 0);
    glColor3f(0,0.5,0);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(439, 223, 0);
   glColor3f(0,0.5,0);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(441, 220, 0);
    glColor3f(0,0.5,0);//25, 10.5, 0);
    circle(4);
    glPopMatrix();



     glPushMatrix();//bush6

    glTranslatef(366, 150, 0);
    glColor3f(0,0.5,0);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(369, 153, 0);
   glColor3f(0,0.5,0);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(371, 150, 0);
    glColor3f(0,0.5,0);//25, 10.5, 0);
    circle(4);
    glPopMatrix();


          glPushMatrix();//bush4

    glTranslatef(276, 220, 0);
    glColor3f(0,0.5,0);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(279, 223, 0);
   glColor3f(0,0.5,0);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(281, 220, 0);
    glColor3f(0,0.5,0);//25, 10.5, 0);
    circle(4);
    glPopMatrix();
}

void fog()
{
   glPushMatrix();//cloud2

   glTranslatef(76, 420, 0);
   glColor3f(0.9,0.9,0.9);//25, 10.5, 0);
   circle(150);
   glPopMatrix();

   glPushMatrix();
   glTranslatef(79, 423, 0);
   glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
   circle(150);
   glPopMatrix();

   glPushMatrix();
   glTranslatef(81, 420, 0);
   glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
   circle(150);
   glPopMatrix();

   glPushMatrix();//cloud3

   glTranslatef(156, 440, 0);
   glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
   circle(150);
   glPopMatrix();

   glPushMatrix();
   glTranslatef(159, 443, 0);
   glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
   circle(150);
   glPopMatrix();

   glPushMatrix();
   glTranslatef(151, 440, 0);
   glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
   circle(150);
   glPopMatrix();

   glPushMatrix();//cloud4

   glTranslatef(206, 400, 0);
   glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
   circle(150);
   glPopMatrix();

   glPushMatrix();
   glTranslatef(209, 403, 0);
   glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
   circle(150);
   glPopMatrix();

   glPushMatrix();
   glTranslatef(241, 400, 0);
   glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
   circle(150);
   glPopMatrix();



   glPushMatrix();//cloud5

   glTranslatef(406, 400, 0);
   glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
   circle(150);
   glPopMatrix();

   glPushMatrix();
   glTranslatef(409, 403, 0);
   glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
   circle(150);
   glPopMatrix();

   glPushMatrix();
   glTranslatef(441, 400, 0);
   glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
   circle(150);
   glPopMatrix();

}


void trees()
{
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.3,0.0);
     glVertex2i(492,310);
     glVertex2i(492,333);
     glVertex2i(489,333);
     glVertex2i(489,310);
    glEnd();


     glBegin(GL_POLYGON);
    glColor3f(0.0,1.0,0.0);
     glVertex2i(470,330);
     glVertex2i(510,330);
     glVertex2i(490,380);
     glEnd();

    glBegin(GL_POLYGON);//small
    glColor3f(1.0,0.3,0.0);
     glVertex2i(451,310);
     glVertex2i(451,333);
     glVertex2i(449,333);
     glVertex2i(449,310);
    glEnd();


     glBegin(GL_POLYGON);
    glColor3f(0.0,1.0,0.0);
     glVertex2i(440,330);
     glVertex2i(460,330);
     glVertex2i(450,350);
     glEnd();



    glBegin(GL_POLYGON);//big
    glColor3f(1.0,0.3,0.0);
     glVertex2i(412,310);
     glVertex2i(412,333);
     glVertex2i(409,333);
     glVertex2i(409,310);
    glEnd();


     glBegin(GL_POLYGON);
    glColor3f(0.0,1.0,0.0);
     glVertex2i(390,330);
     glVertex2i(430,330);
     glVertex2i(410,380);
     glEnd();

    glBegin(GL_POLYGON);//small
    glColor3f(1.0,0.3,0.0);
     glVertex2i(361,310);
     glVertex2i(361,333);
     glVertex2i(359,333);
     glVertex2i(359,310);
    glEnd();


     glBegin(GL_POLYGON);
    glColor3f(0.0,1.0,0.0);
     glVertex2i(350,330);
     glVertex2i(370,330);
     glVertex2i(360,350);
     glEnd();

   glBegin(GL_POLYGON);//big
   glColor3f(1.0,0.3,0.0);
    glVertex2i(312,310);
    glVertex2i(312,333);
    glVertex2i(309,333);
    glVertex2i(309,310);
   glEnd();


    glBegin(GL_POLYGON);
   glColor3f(0.0,1.0,0.0);
    glVertex2i(290,330);
    glVertex2i(330,330);
    glVertex2i(310,380);
    glEnd();

    glBegin(GL_POLYGON);//small
       glColor3f(1.0,0.3,0.0);
        glVertex2i(261,310);
        glVertex2i(261,333);
        glVertex2i(259,333);
        glVertex2i(259,310);
       glEnd();


        glBegin(GL_POLYGON);
       glColor3f(0.0,1.0,0.0);
        glVertex2i(250,330);
        glVertex2i(270,330);
        glVertex2i(260,350);
        glEnd();



glBegin(GL_POLYGON);//big
   glColor3f(1.0,0.3,0.0);
    glVertex2i(212,310);
    glVertex2i(212,333);
    glVertex2i(209,333);
    glVertex2i(209,310);
   glEnd();


    glBegin(GL_POLYGON);
   glColor3f(0.0,1.0,0.0);
    glVertex2i(190,330);
    glVertex2i(230,330);
    glVertex2i(210,380);
    glEnd();

    glBegin(GL_POLYGON);
       glColor3f(1.0,0.3,0.0);
        glVertex2i(161,310);
        glVertex2i(161,333);
        glVertex2i(159,333);
        glVertex2i(159,310);
       glEnd();


        glBegin(GL_POLYGON);
       glColor3f(0.0,1.0,0.0);
        glVertex2i(150,330);
        glVertex2i(170,330);
        glVertex2i(160,350);
        glEnd();


glBegin(GL_POLYGON);//Big tree
   glColor3f(1.0,0.3,0.0);
    glVertex2i(112,310);
    glVertex2i(112,333);
    glVertex2i(109,333);
    glVertex2i(109,310);
   glEnd();


    glBegin(GL_POLYGON);
   glColor3f(0.0,1.0,0.0);
    glVertex2i(90,330);
    glVertex2i(130,330);
    glVertex2i(110,380);
    glEnd();

    glBegin(GL_POLYGON);//Small Tree

       glColor3f(1.0,0.3,0.0);
        glVertex2i(61,310);
        glVertex2i(61,333);
        glVertex2i(59,333);
        glVertex2i(59,310);
       glEnd();


        glBegin(GL_POLYGON);
       glColor3f(0.0,1.0,0.0);
        glVertex2i(50,330);
        glVertex2i(70,330);
        glVertex2i(60,350);
        glEnd();


glBegin(GL_POLYGON);
   glColor3f(1.0,0.3,0.0);
    glVertex2i(12,310);
    glVertex2i(12,333);
    glVertex2i(9,333);
    glVertex2i(9,310);
   glEnd();


    glBegin(GL_POLYGON);
   glColor3f(0.0,1.0,0.0);
    glVertex2i(-10,330);
    glVertex2i(30,330);
    glVertex2i(10,380);
    glEnd();
}

void trees1()
{
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.5,0.0);
     glVertex2i(492,310);
     glVertex2i(492,333);
     glVertex2i(489,333);
     glVertex2i(489,310);
    glEnd();


     glBegin(GL_POLYGON);
   glColor3f(0.0,0.5,0.0);
     glVertex2i(470,330);
     glVertex2i(510,330);
     glVertex2i(490,380);
     glEnd();



   glBegin(GL_POLYGON);//big
   glColor3f(0.0,0.5,0.0);
    glVertex2i(312,310);
    glVertex2i(312,333);
    glVertex2i(309,333);
    glVertex2i(309,310);
   glEnd();


    glBegin(GL_POLYGON);
   glColor3f(0.0,0.5,0.0);
    glVertex2i(290,330);
    glVertex2i(330,330);
    glVertex2i(310,380);
    glEnd();

    glBegin(GL_POLYGON);//small
       glColor3f(0.0,0.5,0.0);
        glVertex2i(261,310);
        glVertex2i(261,333);
        glVertex2i(259,333);
        glVertex2i(259,310);
       glEnd();


        glBegin(GL_POLYGON);
     glColor3f(0.0,0.5,0.0);
        glVertex2i(250,330);
        glVertex2i(270,330);
        glVertex2i(260,350);
        glEnd();



glBegin(GL_POLYGON);//big
  glColor3f(0.0,0.5,0.0);
    glVertex2i(212,310);
    glVertex2i(212,333);
    glVertex2i(209,333);
    glVertex2i(209,310);
   glEnd();


    glBegin(GL_POLYGON);
  glColor3f(0.0,0.5,0.0);
    glVertex2i(190,330);
    glVertex2i(230,330);
    glVertex2i(210,380);
    glEnd();

    glBegin(GL_POLYGON);
       glColor3f(0.0,0.5,0.0);
        glVertex2i(161,310);
        glVertex2i(161,333);
        glVertex2i(159,333);
        glVertex2i(159,310);
       glEnd();


        glBegin(GL_POLYGON);
      glColor3f(0.0,0.5,0.0);
        glVertex2i(150,330);
        glVertex2i(170,330);
        glVertex2i(160,350);
        glEnd();


glBegin(GL_POLYGON);//Big tree
   glColor3f(0.0,0.5,0.0);
    glVertex2i(112,310);
    glVertex2i(112,333);
    glVertex2i(109,333);
    glVertex2i(109,310);
   glEnd();


    glBegin(GL_POLYGON);
   glColor3f(0.0,0.5,0.0);
    glVertex2i(90,330);
    glVertex2i(130,330);
    glVertex2i(110,380);
    glEnd();

    glBegin(GL_POLYGON);//Small Tree

      glColor3f(0.0,0.5,0.0);
        glVertex2i(61,310);
        glVertex2i(61,333);
        glVertex2i(59,333);
        glVertex2i(59,310);
       glEnd();


        glBegin(GL_POLYGON);
       glColor3f(0.0,0.5,0.0);
        glVertex2i(50,330);
        glVertex2i(70,330);
        glVertex2i(60,350);
        glEnd();


glBegin(GL_POLYGON);
   glColor3f(0.0,0.5,0.0);
    glVertex2i(12,310);
    glVertex2i(12,333);
    glVertex2i(9,333);
    glVertex2i(9,310);
   glEnd();


    glBegin(GL_POLYGON);
   glColor3f(0.0,0.5,0.0);
    glVertex2i(-10,330);
    glVertex2i(30,330);
    glVertex2i(10,380);
    glEnd();
}

void trees2()
{
    glBegin(GL_POLYGON);
   glColor3f(0.6,0.4,0.1);
     glVertex2i(492,310);
     glVertex2i(492,333);
     glVertex2i(489,333);
     glVertex2i(489,310);
    glEnd();


     glBegin(GL_POLYGON);
   glColor3f(0.0,0.5,0.0);
     glVertex2i(470,330);
     glVertex2i(510,330);
     glVertex2i(490,380);
     glEnd();




glBegin(GL_POLYGON);//big
  glColor3f(0.6,0.4,0.1);
    glVertex2i(212,310);
    glVertex2i(212,333);
    glVertex2i(209,333);
    glVertex2i(209,310);
   glEnd();


    glBegin(GL_POLYGON);
  glColor3f(0.0,0.5,0.0);
    glVertex2i(190,330);
    glVertex2i(230,330);
    glVertex2i(210,380);
    glEnd();

    glBegin(GL_POLYGON);
      glColor3f(0.6,0.4,0.1);
        glVertex2i(161,310);
        glVertex2i(161,333);
        glVertex2i(159,333);
        glVertex2i(159,310);
       glEnd();


        glBegin(GL_POLYGON);
       glColor3f(0.0,0.5,0.0);
        glVertex2i(150,330);
        glVertex2i(170,330);
        glVertex2i(160,350);
        glEnd();


glBegin(GL_POLYGON);//Big tree
   glColor3f(0.6,0.4,0.1);
    glVertex2i(112,310);
    glVertex2i(112,333);
    glVertex2i(109,333);
    glVertex2i(109,310);
   glEnd();


    glBegin(GL_POLYGON);
  glColor3f(0.0,0.5,0.0);
    glVertex2i(90,330);
    glVertex2i(130,330);
    glVertex2i(110,380);
    glEnd();

    glBegin(GL_POLYGON);//Small Tree

       glColor3f(0.6,0.4,0.1);
        glVertex2i(61,310);
        glVertex2i(61,333);
        glVertex2i(59,333);
        glVertex2i(59,310);
       glEnd();


        glBegin(GL_POLYGON);
       glColor3f(0.0,0.5,0.0);
        glVertex2i(50,330);
        glVertex2i(70,330);
        glVertex2i(60,350);
        glEnd();


glBegin(GL_POLYGON);
  glColor3f(0.6,0.4,0.1);
    glVertex2i(12,310);
    glVertex2i(12,333);
    glVertex2i(9,333);
    glVertex2i(9,310);
   glEnd();


    glBegin(GL_POLYGON);
   glColor3f(0.0,0.5,0.0);
    glVertex2i(-10,330);
    glVertex2i(30,330);
    glVertex2i(10,380);
    glEnd();
}



void mountain()
{
    glBegin(GL_POLYGON);
glColor3f(0.5f, 0.10f, 0.05f);
    glVertex2i(-60,310);
    glVertex2i(110,325);
    glVertex2i(30,366);

glEnd();


glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.10f, 0.05f);
    glVertex2i(40,310);
    glVertex2i(230,325);
    glVertex2i(150,366);

glEnd();


glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.10f, 0.05f);
    glVertex2i(140,310);
    glVertex2i(350,325);
    glVertex2i(270,366);

glEnd();

glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.10f, 0.05f);
    glVertex2i(240,313);
    glVertex2i(470,325);
    glVertex2i(390,366);

glEnd();

glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.10f, 0.05f);
    glVertex2i(440,313);
    glVertex2i(570,325);
    glVertex2i(490,346);

glEnd();
glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.10f, 0.05f);
    glVertex2i(540,313);
    glVertex2i(670,325);
    glVertex2i(590,360);

glEnd();
}

void mountain1()
{
    glBegin(GL_POLYGON);
glColor3f(0.5f, 0.10f, 0.05f);
    glVertex2i(-60,310);
    glVertex2i(110,325);
    glVertex2i(30,366);

glEnd();


glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.10f, 0.05f);
    glVertex2i(40,310);
    glVertex2i(230,325);
    glVertex2i(150,366);

glEnd();


glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.10f, 0.05f);
    glVertex2i(140,310);
    glVertex2i(350,325);
    glVertex2i(270,366);

glEnd();
 glBegin(GL_POLYGON);
     glColor3f(0.5f, 0.10f, 0.05f);
     glVertex2i(440,313);
     glVertex2i(570,325);
     glVertex2i(490,346);

 glEnd();
 glBegin(GL_POLYGON);
     glColor3f(0.5f, 0.10f, 0.05f);
     glVertex2i(540,313);
     glVertex2i(670,325);
     glVertex2i(590,360);

 glEnd();

}
void mountain2()
{
    glBegin(GL_POLYGON);
glColor3f(0.5f, 0.10f, 0.05f);
    glVertex2i(-60,310);
    glVertex2i(110,325);
    glVertex2i(30,366);

glEnd();


glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.10f, 0.05f);
    glVertex2i(40,310);
    glVertex2i(230,325);
    glVertex2i(150,366);

glEnd();



glEnd();
 glBegin(GL_POLYGON);
     glColor3f(0.5f, 0.10f, 0.05f);
     glVertex2i(440,313);
     glVertex2i(570,325);
     glVertex2i(490,346);

 glEnd();
}
void display(void)
#include<math.h>
{
glClear(GL_COLOR_BUFFER_BIT);

if(flag==0)
{

glRasterPos3f(10,58,0);//press s to start
for(i=0;s[i]!='\0';i++)
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24,s[i]);
glRasterPos3f(10,80,0);//maximize screen
for(i=0;s1[i]!='\0';i++)
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24,s1[i]);
glRasterPos3f(150,478,0);//dsatm
for(i=0;s2[i]!='\0';i++)
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24,s2[i]);
glRasterPos3f(135,458,0);//department
for(i=0;s3[i]!='\0';i++)
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24,s3[i]);
glRasterPos3f(225,288,0);// Mini project on
for(i=0;s4[i]!='\0';i++)
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24,s4[i]);
glRasterPos3f(195,268,0);//Title
for(i=0;s5[i]!='\0';i++)
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24,s5[i]);
glRasterPos3f(320,100,0);//by abhishek and tarun
for(i=0;s6[i]!='\0';i++)
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24,s6[i]);
glColor3f(0,0,0);//Color of front page text proper
glRasterPos3f(304,80,0);//under the guidance of
for(i=0;s7[i]!='\0';i++)
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24,s7[i]);
glRasterPos3f(445,58,0);//dept of cse
for(i=0;s8[i]!='\0';i++)
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24,s8[i]);
glRasterPos3f(10,38,0);//press q to quit
for(i=0;s9[i]!='\0';i++)
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24,s9[i]);




}
else
{


//green
glBegin(GL_POLYGON);
     glColor3f(0.52,0.39,0.39);//Color of Middle Part
    glVertex2i(-100,300);
    glVertex2i(545,310);
       glVertex2i(840,100);
    glVertex2i(-100,100);
glEnd();
road();



mountain();
trees();
    Sun();
    bush();

    House1();
    House3();
    House4();
    House8();
    House9();




//plane construction

glPushMatrix();
glTranslated(a,c,0.0);
    glColor3f(1,1,1);
glBegin(GL_POLYGON);//rectangular body
glVertex2f(0.0,30.0);
glVertex2f(0.0,55.0);
glVertex2f(135.0,55.0);
glVertex2f(135.0,30.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(a,c,0.0);
    glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);//upper triangle construction plane
glVertex2f(135.0,55.0);
glVertex2f(150.0,50.0);
glVertex2f(155.0,45.0);
glVertex2f(160.0,40.0);
glVertex2f(135.0,40.0);
glEnd();
glPopMatrix();

glPushMatrix();//wheel
    glTranslated(a,c,0.0);
    glTranslatef(46, 26, 0);
    glColor3f(0.0,0.0,0.0);
    glRotated(angle,0,0,1);
   glutWireTorus (0.1,0.2,10,10);
    circle(9);
    glPopMatrix();

    glPushMatrix();
    glTranslated(a,c,0.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
        glVertex2i(57, 20);//wheel spokes//
        glVertex2i(47, 30);
        glVertex2i(37, 30);
        glVertex2i(47, 20);
    glEnd();
    glPopMatrix();

    glPushMatrix();//front wheel
    glTranslated(a,c,0.0);
    glTranslatef(125,26, 0);
    glColor3f(0.0,0.0,0.0);
    glRotated(angle,0,0,1);
   glutWireTorus (0.1,0.2,10,10);
    circle(9);
    glPopMatrix();

    glPushMatrix();
    glTranslated(a,c,0.0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
        glVertex2i(135, 20);//front wheel spokes
        glVertex2i(125, 30);
        glVertex2i(115, 30);
        glVertex2i(125, 20);
        glEnd();
    glPopMatrix();

    glPushMatrix();
glTranslated(a,c,0.0);
    glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);//rectangular accent
glVertex2f(0.0,45.0);//top left
glVertex2f(0.0,55.0);//top right
glVertex2f(30.0,55.0);//bottom right
glVertex2f(40.0,45.0);//bottom left
glEnd();
glPopMatrix();



glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//lower triangle
glVertex2f(135.0,40.0);
glVertex2f(160.0,40.0);
glVertex2f(160.0,37.0);
glVertex2f(145.0,30.0);
glVertex2f(135.0,30.0);
glEnd();
glPopMatrix();


glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);//back wing
glVertex2f(0.0,55.0);
glVertex2f(0.0,80.0);
glVertex2f(10.0,80.0);
glVertex2f(40.0,55.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);//left side wing
glVertex2f(65.0,55.0);
glVertex2f(50.0,70.0);
glVertex2f(75.0,70.0);
glVertex2f(90.0,55.0);
glEnd();
glPopMatrix();



  //clouds
    glPushMatrix();//cloud1

    glTranslatef(46, 400, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(49, 403, 0);
   glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(51, 400, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud2

    glTranslatef(76, 420, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(79, 423, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(81, 420, 0);
   glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud3

    glTranslatef(106, 440, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(109, 443, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(111, 440, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud4

    glTranslatef(136, 400, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(139, 403, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(141, 400, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();


      glPushMatrix();//cloud5

    glTranslatef(366, 400, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(369, 403, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(371, 400, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud6

    glTranslatef(396, 420, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(399, 423, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(401, 420, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud7

    glTranslatef(426, 440, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(429, 443, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(431, 440, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud8

    glTranslatef(456, 400, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(459, 403, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(461, 400, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();




glPushMatrix();

glTranslated(a,c,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);//rightside wing
glVertex2f(70.0,40.0);
glVertex2f(100.0,40.0);
glVertex2f(80.0,15.0);
glVertex2f(50.0,15.0);

glEnd();

glPopMatrix();



    if(c>390)    //timer to jump to next display
{
    display2();
    d+=5;//plane takeoff on x in 2nd display
}

if(a>500.0)//window position during take off
{
    a=0.0;
    b=0.0;
}

if(c>600)//timer to jump to 3rd display
{
    display3();
    e+=5;//plane takeoff on x in 3rd display

    if(e>250)//timer to call blast function
    {
        blast();
        e=250;
    }


}


if(c>820)//timer to jump to 3rd display
{
    display4();
    e+=5;//plane takeoff on x in 3rd display

    if(e>250)//timer to call blast function
    {
        blast();
        e=250;
    }


}

if(c>900)//timer to jump to 3rd display
{
    display5();
    e+=5;//plane takeoff on x in 3rd display

    if(e>250)//timer to call blast function
    {
        blast();
        e=250;
    }


}

if(c>950)//timer to jump to 3rd display
{
    display6();
    e+=5;//plane takeoff on x in 3rd display

    if(e>250)//timer to call blast function
    {
        blast();
        e=250;
    }


}


if(c>980)//timer to jump to 3rd display
{
    display7();
    e+=5;//plane takeoff on x in 3rd display

    if(e>250)//timer to call blast function
    {
        blast();
        e=250;
    }


}

if(c>1120)//timer to jump to 3rd display
{
    display8();
    e+=5;//plane takeoff on x in 3rd display

    if(e>250)//timer to call blast function
    {
        blast();
        e=250;
    }


}

if(c>1150)//timer to jump to 3rd display
{
    display9();
    e+=5;//plane takeoff on x in 3rd display

    if(e>250)//timer to call blast function
    {
        blast();
        e=250;
    }


}

}

glFlush();
glutSwapBuffers();
}
void building()//Other Building Near the Crash Building
{

//2nd
    glColor3f(0.6,0.4,0.7);
    glBegin(GL_POLYGON);
    glVertex2f(250.0, 80.0);
    glVertex2f(250.0, 330.0);
    glVertex2f(300.0, 250.0);
    glVertex2f(300.0, 0.0);
    glEnd();

}
void building_window1()
{

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
     glVertex2f(275.0, 250.0);//bottom left
    glVertex2f(275.0, 270.0);//top left
    glVertex2f(290.0, 265.0);//top right
    glVertex2f(290.0, 245.0);//bottom right
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
     glVertex2f(255.0, 200.0);//bottom left
    glVertex2f(255.0, 220.0);//top left
    glVertex2f(270.0, 215.0);//top right
    glVertex2f(270.0, 195.0);//bottom right
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
     glVertex2f(275.0, 150.0);//bottom left
    glVertex2f(275.0, 170.0);//top left
    glVertex2f(290.0, 165.0);//top right
    glVertex2f(290.0, 145.0);//bottom right
    glEnd();
}

void building22()//Other Building Near the Crash Building
{

//2nd
    glColor3f(1.0,0.5,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(150.0, 80.0);
    glVertex2f(150.0, 330.0);
    glVertex2f(200.0, 250.0);
    glVertex2f(200.0, 0.0);
    glEnd();

}

void building_window2()
{

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
     glVertex2f(175.0, 250.0);//bottom left
    glVertex2f(175.0, 270.0);//top left
    glVertex2f(190.0, 265.0);//top right
    glVertex2f(190.0, 245.0);//bottom right
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
     glVertex2f(155.0, 200.0);//bottom left
    glVertex2f(155.0, 220.0);//top left
    glVertex2f(170.0, 215.0);//top right
    glVertex2f(170.0, 195.0);//bottom right
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
     glVertex2f(175.0, 150.0);//bottom left
    glVertex2f(175.0, 170.0);//top left
    glVertex2f(190.0, 165.0);//top right
    glVertex2f(190.0, 145.0);//bottom right
    glEnd();
}

void building23()//Other Building Near the Crash Building
{

//2nd
    glColor3f(0.0,0.5,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(50.0, 80.0);
    glVertex2f(50.0, 230.0);
    glVertex2f(100.0, 150.0);
    glVertex2f(100.0, 0.0);
    glEnd();

}

void building_window23()
{


    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
     glVertex2f(55.0, 160.0);//bottom left
    glVertex2f(55.0, 180.0);//top left
    glVertex2f(70.0, 175.0);//top right
    glVertex2f(70.0, 155.0);//bottom right
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
     glVertex2f(75.0, 110.0);//bottom left
    glVertex2f(75.0, 130.0);//top left
    glVertex2f(90.0, 125.0);//top right
    glVertex2f(90.0, 105.0);//bottom right
    glEnd();
}


void building4()
{

    glColor3f(0.5f, 0.10f, 0.05f);
    glBegin(GL_POLYGON);
    glVertex2f(350.0, 80.0);//bottom left
    glVertex2f(400.0, 450.0);//top left
    glVertex2f(450.0, 370.0);//top right
    glVertex2f(400.0, 0.0);//bottom right
    glEnd();
}

void building_windows4()
{


    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
     glVertex2f(375.0, 200.0);//bottom left
    glVertex2f(375.0, 220.0);//top left
    glVertex2f(390.0, 215.0);//top right
    glVertex2f(390.0, 195.0);//bottom right
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
     glVertex2f(385.0, 150.0);//bottom left
    glVertex2f(385.0, 170.0);//top left
    glVertex2f(400.0, 165.0);//top right
    glVertex2f(400.0, 145.0);//bottom right
    glEnd();
}

void building5()
{

    glColor3f(0.5f, 0.10f, 0.05f);
    glBegin(GL_POLYGON);
    glVertex2f(350.0, 80.0);//bottom left
    glVertex2f(430.0, 420.0);//top left
    glVertex2f(480.0, 340.0);//top right
    glVertex2f(400.0, 0.0);//bottom right
    glEnd();
}
void building_window5()
{


    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
     glVertex2f(385.0, 200.0);//bottom left
    glVertex2f(385.0, 220.0);//top left
    glVertex2f(400.0, 215.0);//top right
    glVertex2f(400.0, 195.0);//bottom right
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
     glVertex2f(395.0, 150.0);//bottom left
    glVertex2f(395.0, 170.0);//top left
    glVertex2f(410.0, 165.0);//top right
    glVertex2f(410.0, 145.0);//bottom right
    glEnd();
}


void building6()
{

    glColor3f(0.5f, 0.10f, 0.05f);
    glBegin(GL_POLYGON);
    glVertex2f(350.0, 80.0);//bottom left
    glVertex2f(470.0, 380.0);//top left
    glVertex2f(520.0, 300.0);//top right
    glVertex2f(400.0, 0.0);//bottom right
    glEnd();
}

void building_window6()
{


    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
     glVertex2f(405.0, 200.0);//bottom left
    glVertex2f(405.0, 220.0);//top left
    glVertex2f(420.0, 215.0);//top right
    glVertex2f(420.0, 195.0);//bottom right
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
     glVertex2f(415.0, 150.0);//bottom left
    glVertex2f(415.0, 170.0);//top left
    glVertex2f(430.0, 165.0);//top right
    glVertex2f(430.0, 145.0);//bottom right
    glEnd();
}

void building7()
{

    glColor3f(0.5f, 0.10f, 0.05f);
    glBegin(GL_POLYGON);
    glVertex2f(350.0, 80.0);//bottom left
    glVertex2f(510.0, 340.0);//top left
    glVertex2f(540.0, 260.0);//top right
    glVertex2f(400.0, 0.0);//bottom right
    glEnd();
}
void building_window7()
{


    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
     glVertex2f(435.0, 200.0);//bottom left
    glVertex2f(435.0, 220.0);//top left
    glVertex2f(450.0, 215.0);//top right
    glVertex2f(450.0, 195.0);//bottom right
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
     glVertex2f(435.0, 150.0);//bottom left
    glVertex2f(435.0, 170.0);//top left
    glVertex2f(450.0, 165.0);//top right
    glVertex2f(450.0, 145.0);//bottom right
    glEnd();
}
void building8()
{

    glColor3f(0.5f, 0.10f, 0.05f);
    glBegin(GL_POLYGON);
    glVertex2f(350.0, 80.0);//bottom left
    glVertex2f(540.0, 310.0);//top left
    glVertex2f(570.0, 230.0);//top right
    glVertex2f(400.0, 0.0);//bottom right
    glEnd();
}


void building9()
{

    glColor3f(0.5f, 0.10f, 0.05f);
    glBegin(GL_POLYGON);
    glVertex2f(350.0, 80.0);//bottom left
    glVertex2f(580.0, 280.0);//top left
    glVertex2f(610.0, 190.0);//top right
    glVertex2f(400.0, 0.0);//bottom right
    glEnd();
}
void building10()
{

    glColor3f(0.5f, 0.10f, 0.05f);
    glBegin(GL_POLYGON);
    glVertex2f(350.0, 80.0);//bottom left
    glVertex2f(620.0, 300.0);//top left
    glVertex2f(650.0, 220.0);//top right
    glVertex2f(400.0, 0.0);//bottom right
    glEnd();
}
void build_outline() //building out lines
{
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP);
    glTranslatef(0.0,0.0,-8.0);
    glRotatef(60.0,1.0,1.0,1.0);
    glVertex2f(350.0, 80.0);
    glVertex2f(350.0, 480.0);
    glVertex2f(400.0, 400.0);
    glVertex2f(400.0, 0.0);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP);
    glTranslatef(0.0,0.0,-8.0);
    glRotatef(60.0,1.0,1.0,1.0);
    glVertex2f(400.0, 0.0);
    glVertex2f(400.0, 400.0);
    glVertex2f(450.0, 400.0);
    glVertex2f(450.0, 0.0);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP);
    glTranslatef(0.0,0.0,-8.0);
    glRotatef(60.0,1.0,1.0,1.0);
    glVertex2f(400.0, 400.0);
    glVertex2f(350.0, 480.0);
    glVertex2f(400.0, 480.0);
    glVertex2f(450.0, 400.0);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP);
    glTranslatef(0.0,0.0,-8.0);
    glRotatef(60.0,1.0,1.0,1.0);
    glVertex2f(250.0, 80.0);
    glVertex2f(250.0, 380.0);
    glVertex2f(300.0, 300.0);
    glVertex2f(300.0, 0.0);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP);
    glTranslatef(0.0,0.0,-8.0);
    glRotatef(60.0,1.0,1.0,1.0);
    glVertex2f(300.0, 0.0);
    glVertex2f(300.0, 300.0);
    glVertex2f(350.0, 300.0);
    glVertex2f(350.0, 0.0);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP);
    glTranslatef(0.0,0.0,-8.0);
    glRotatef(60.0,1.0,1.0,1.0);
    glVertex2f(300.0, 300.0);
    glVertex2f(250.0, 380.0);
    glVertex2f(300.0, 380.0);
    glVertex2f(350.0, 300.0);
    glEnd();
}


void building2()
{
    glColor3f(0.80,0.20,0.30);
    glBegin(GL_POLYGON);
    glVertex2f(25.0,8.0);
    glVertex2f(25.0,38.0);
    glVertex2f(30.0,30.0);
    glVertex2f(30.0,0.0);
    glEnd();

    glColor3f(0.75,0.75,0.75);
    glBegin(GL_POLYGON);
    glVertex2f(30.0,0.0);
    glVertex2f(30.0,30.0);
    glVertex2f(35.0,30.0);
    glVertex2f(35.0,0.0);
    glEnd();

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(30.0,20.0);
    glVertex2f(25.0,38.0);
    glVertex2f(30.0,38.0);
    glVertex2f(35.0,30.0);
    glEnd();

    glColor3f(0.60,0.40,0.70);
    glBegin(GL_POLYGON);//upper triangle of building
    glVertex2f(30.0,30.0);
    glVertex2f(25.0,38.0);
    glVertex2f(30.0,38.0);
    glEnd();



    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);//seperation line of floors
    glVertex2f(25.0,18);
    glVertex2f(30.0,10);
    glEnd();
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2f(25.0,18);
    glVertex2f(30.0,10);
    glEnd();
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2f(25.0,28);
    glVertex2f(30.0,20);
    glEnd();
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2f(35.0,10);
    glVertex2f(30.0,10);
    glEnd();
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2f(35.0,20);
    glVertex2f(30.0,20);
    glEnd();
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2f(35.0,20);
    glVertex2f(30.0,20);

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2f(25.0,18);
    glEnd();


build_outline2();
}


void build_outline2()//building out lines
{
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(25.0,8.0);
glVertex2f(25.0,38.0);
glVertex2f(30.0,30.0);
glVertex2f(30.0,0.0);
glEnd();

glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(30.0,0.0);
glVertex2f(30.0,30.0);
glVertex2f(35.0,30.0);
glVertex2f(35.0,0.0);
glEnd();

glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(30.0,30.0);
glVertex2f(25.0,38.0);
glVertex2f(30.0,38.0);
glVertex2f(35.0,30.0);
glEnd();
}
void building3()
{
    /*glLoadIdentity();
    glRotatef(45, 0, 0, 0);*/
    glColor3f(0.5f, 0.10f, 0.05f);
    glBegin(GL_POLYGON);
    glVertex2f(350.0, 80.0);
    glVertex2f(350.0, 480.0);
    glVertex2f(400.0, 400.0);
    glVertex2f(400.0, 0.0);
    glEnd();
}

void building_windows3()
{
    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
     glVertex2f(355.0, 400.0);//bottom left
    glVertex2f(355.0, 420.0);//top left
    glVertex2f(370.0, 415.0);//top right
    glVertex2f(370.0, 395.0);//bottom right
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
     glVertex2f(375.0, 350.0);//bottom left
    glVertex2f(375.0, 370.0);//top left
    glVertex2f(390.0, 365.0);//top right
    glVertex2f(390.0, 345.0);//bottom right
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
     glVertex2f(355.0, 300.0);//bottom left
    glVertex2f(355.0, 320.0);//top left
    glVertex2f(370.0, 315.0);//top right
    glVertex2f(370.0, 295.0);//bottom right
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
     glVertex2f(375.0, 250.0);//bottom left
    glVertex2f(375.0, 270.0);//top left
    glVertex2f(390.0, 265.0);//top right
    glVertex2f(390.0, 245.0);//bottom right
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
     glVertex2f(355.0, 200.0);//bottom left
    glVertex2f(355.0, 220.0);//top left
    glVertex2f(370.0, 215.0);//top right
    glVertex2f(370.0, 195.0);//bottom right
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
     glVertex2f(375.0, 150.0);//bottom left
    glVertex2f(375.0, 170.0);//top left
    glVertex2f(390.0, 165.0);//top right
    glVertex2f(390.0, 145.0);//bottom right
    glEnd();
}


void blast(void)//blast polygon construction
{
    glPushMatrix();
    glTranslated(-10.0, -60.0, 0.0);
    glColor3f(1.0f, 0.5f,0.0f);//red
    glBegin(GL_POLYGON);
    glVertex2f(404.4, 320.0);
    glVertex2f(384.0, 285.0);
    glVertex2f(368.0, 344.5);
    glVertex2f(344.0, 355.0);
    glVertex2f(347.2, 414.5);
    glVertex2f(332.8, 442.5);
    glVertex2f(347.2, 477.5);
    glVertex2f(352.0, 530.0);
    glVertex2f(379.2, 519.5);
    glVertex2f(396.8, 565.0);
    glVertex2f(416.0, 530.0);
    glVertex2f(440.0, 547.5);
    glVertex2f(452.8, 512.5);
    glVertex2f(472.0, 512.5);
    glVertex2f(475.2, 470.5);
    glVertex2f(488.0, 442.5);
    glVertex2f(488.0, 404.0);
    glVertex2f(470.0, 372.5);
    glVertex2f(475.2, 337.5);
    glVertex2f(464.0, 306.0);
    glVertex2f(444.8, 320.0);
    glVertex2f(425.6, 285.0);
    glVertex2f(404.8, 320.0);
    glEnd();
    glPopMatrix();
}

void road()
{

glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);//black road
glVertex2f(0.0,0.0);
glVertex2f(0.0,100.0);
glVertex2f(500.0,100.0);
glVertex2f(500.0,0.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(b,0.0,0.0);
    glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);//white strips on road
glVertex2f(0.0,40.0);
glVertex2f(8.0,60.0);
glVertex2f(58.0,60.0);
glVertex2f(50.0,40.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(b,0.0,0.0);
    glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);
glVertex2f(100.0,40.0);
glVertex2f(108.0,60.0);
glVertex2f(158.0,60.0);
glVertex2f(150.0,40.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(b,0.0,0.0);
    glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);
glVertex2f(200.0,40.0);
glVertex2f(208.0,60.0);
glVertex2f(258.0,60.0);
glVertex2f(250.0,40.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(b,0.0,0.0);
    glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);
glVertex2f(300.0,40.0);
glVertex2f(308.0,60.0);
glVertex2f(358.0,60.0);
glVertex2f(350.0,40.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(b,0.0,0.0);
    glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);
glVertex2f(400.0,40.0);
glVertex2f(408.0,60.0);
glVertex2f(458.0,60.0);
glVertex2f(450.0,40.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(b,0.0,0.0);
    glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);
glVertex2f(500.0,40.0);
glVertex2f(508.0,60.0);
glVertex2f(558.0,60.0);
glVertex2f(550.0,40.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(b,0.0,0.0);
    glColor3f(0.9,0.7,0.0);
glBegin(GL_POLYGON);
glVertex2f(600.0,40.0);
glVertex2f(608.0,60.0);
glVertex2f(658.0,60.0);
glVertex2f(650.0,40.0);
glEnd();
glPopMatrix();


}


void display2()
{

glClear(GL_COLOR_BUFFER_BIT);





//blue mid
glBegin(GL_POLYGON);
glColor3f(0.0f,0.0f,1.0f);
    glVertex2i(-10,300);//Top Left//
    glVertex2i(645,310);//Top Right//
       glVertex2i(940,0);//Bottom Right//
    glVertex2i(-10,0);//Bottom Left//
glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
        glVertex2i(-10,600);//Top left//
        glVertex2i(645,900);//Top Right//
           glVertex2i(940,300);//Bottom Right//
        glVertex2i(-10,300);//Bottom Left//
    glEnd();
//trees();/

glPushMatrix();
glTranslated(d,300.0,0.0);
    glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2f(0.0,30.0);
glVertex2f(0.0,55.0);
glVertex2f(135.0,55.0);
glVertex2f(135.0,30.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(d,300.0,0.0);
    glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(135.0,55.0);
glVertex2f(150.0,50.0);
glVertex2f(155.0,45.0);
glVertex2f(160.0,40.0);
glVertex2f(135.0,40.0);
glEnd();
glPopMatrix();


glPushMatrix();
glTranslated(d,300.0,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(135.0,40.0);
glVertex2f(160.0,40.0);
glVertex2f(160.0,37.0);
glVertex2f(145.0,30.0);
glVertex2f(135.0,30.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(d,300.0,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(0.0,55.0);
glVertex2f(0.0,80.0);
glVertex2f(10.0,80.0);
glVertex2f(40.0,55.0);
//glVertex2f(165.0,40.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(d,300.0,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(65.0,55.0);
glVertex2f(50.0,70.0);
glVertex2f(75.0,70.0);
glVertex2f(90.0,55.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(d,300.0,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(70.0,40.0);
glVertex2f(100.0,40.0);
glVertex2f(80.0,15.0);
glVertex2f(50.0,15.0);

glEnd();
glPopMatrix();
    glPushMatrix();
    glTranslated(d,300.0,0.0);
    glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);//rectangular accent
glVertex2f(0.0,45.0);//top left
glVertex2f(0.0,55.0);//top right
glVertex2f(30.0,55.0);//bottom right
glVertex2f(40.0,45.0);//bottom left
glEnd();
glPopMatrix();

    Moon();
    ship();
    ship1();
    fish1();
    fish2();
    fish3();
    plant();
    pb();
    stars();

    //clouds
  /*  glPushMatrix();//cloud1

    glTranslatef(46, 400, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(49, 403, 0);
   glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(51, 400, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud2

    glTranslatef(76, 420, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(79, 423, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(81, 420, 0);
   glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud3

    glTranslatef(106, 440, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(109, 443, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(111, 440, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud4

    glTranslatef(136, 400, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(139, 403, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(141, 400, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();


      glPushMatrix();//cloud5

    glTranslatef(366, 400, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(369, 403, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(371, 400, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud6

    glTranslatef(396, 420, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(399, 423, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(401, 420, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud7

    glTranslatef(426, 440, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(429, 443, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(431, 440, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud8

    glTranslatef(456, 400, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(459, 403, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(461, 400, 0);
    glColor3f(1,1,1);//25, 10.5, 0);
    circle(4);
    glPopMatrix(); */




}



void display3() // THIRD DISPLAY OF THE PLANE
{


    glClear(GL_COLOR_BUFFER_BIT);
    fog();

glBegin(GL_POLYGON);
     glColor3f(0.52,0.39,0.39);//Color of Middle Part
    glVertex2i(-10,300);
    glVertex2i(645,310);
       glVertex2i(940,100);
    glVertex2i(-10,100);
glEnd();
    building();
    building_window1();
    building22();
    building_window2();
    building23();
    building_window23();
    building3();
    building_windows3();
   // building4();
  //  building5();
   // building6();
   // building7();

    mountain2();
    Sun1();
    trees2();
    road();

    //clouds
    glPushMatrix();//cloud1

    glTranslatef(36, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(39, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(41, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud2

    glTranslatef(66, 420, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(69, 423, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(71, 420, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud3

    glTranslatef(96, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(99, 443, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(101, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud4

    glTranslatef(136, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(139, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(141, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud5

  glTranslatef(256, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(259, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(261, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();//cloud6

  glTranslatef(286, 420, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(289, 423, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(291, 420, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();//cloud7

  glTranslatef(316, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(319, 443, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(321, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();//cloud8

  glTranslatef(336, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(339, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(341, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();
    glPushMatrix();//cloud9

    glTranslatef(436, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(439, 443, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(441, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud10

    glTranslatef(466, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(469, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(471, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();



    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 30.0);
    glVertex2f(0.0, 55.0);
    glVertex2f(135.0, 55.0);
    glVertex2f(135.0, 30.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();//front wheel
    glTranslated(e, 300.0, 0.0);
    glTranslatef(125,26, 0);
    glColor3f(0.0,0.0,0.0);
    glRotated(angle,0,0,1);
   glutWireTorus (0.1,0.2,10,10);
    circle(9);
    glPopMatrix();
    glPushMatrix();//wheel
    glTranslated(e, 300.0, 0.0);
        glTranslatef(46, 26, 0);
        glColor3f(0.0,0.0,0.0);
        glRotated(angle,0,0,1);
       glutWireTorus (0.1,0.2,10,10);
        circle(9);
        glPopMatrix();

    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(135.0, 55.0);
    glVertex2f(150.0, 50.0);
    glVertex2f(155.0, 45.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(135.0, 40.0);
    glEnd();
    
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(135.0, 55.0);
    glVertex2f(150.0, 50.0);
    glVertex2f(155.0, 45.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(135.0, 40.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(135.0, 40.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(160.0, 37.0);
    glVertex2f(145.0, 30.0);
    glVertex2f(135.0, 30.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 55.0);
    glVertex2f(0.0, 80.0);
    glVertex2f(10.0, 80.0);
    glVertex2f(40.0, 55.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(65.0, 55.0);
    glVertex2f(50.0, 70.0);
    glVertex2f(75.0, 70.0);
    glVertex2f(90.0, 55.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(70.0, 40.0);
    glVertex2f(100.0, 40.0);
    glVertex2f(80.0, 15.0);
    glVertex2f(50.0, 15.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);//rectangular accent
glVertex2f(0.0,45.0);//top left
glVertex2f(0.0,55.0);//top right
glVertex2f(30.0,55.0);//bottom right
glVertex2f(40.0,45.0);//bottom left
glEnd();
glPopMatrix();
}


void display4() // THIRD DISPLAY OF THE PLANE
{


    glClear(GL_COLOR_BUFFER_BIT);
    fog();

glBegin(GL_POLYGON);
     glColor3f(0.52,0.39,0.39);//Color of Middle Part
    glVertex2i(-10,300);
    glVertex2i(645,310);
       glVertex2i(940,100);
    glVertex2i(-10,100);
glEnd();

    building();
    building_window1();
    building22();
    building_window2();
    building23();
    building_window23();
   // building3();
  //  building_windows3();
    building4();
    building_windows4();

    mountain2();
    Sun1();
    trees2();
    road();

    //clouds
    glPushMatrix();//cloud1

    glTranslatef(36, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(39, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(41, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud2

    glTranslatef(66, 420, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(69, 423, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(71, 420, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud3

    glTranslatef(96, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(99, 443, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(101, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud4

    glTranslatef(136, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(139, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(141, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud5

  glTranslatef(256, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(259, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(261, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();//cloud6

  glTranslatef(286, 420, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(289, 423, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(291, 420, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();//cloud7

  glTranslatef(316, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(319, 443, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(321, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();//cloud8

  glTranslatef(336, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(339, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(341, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();
    glPushMatrix();//cloud9

    glTranslatef(436, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(439, 443, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(441, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud10

    glTranslatef(466, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(469, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(471, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();



    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 30.0);
    glVertex2f(0.0, 55.0);
    glVertex2f(135.0, 55.0);
    glVertex2f(135.0, 30.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(135.0, 55.0);
    glVertex2f(150.0, 50.0);
    glVertex2f(155.0, 45.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(135.0, 40.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(135.0, 55.0);
    glVertex2f(150.0, 50.0);
    glVertex2f(155.0, 45.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(135.0, 40.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(135.0, 40.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(160.0, 37.0);
    glVertex2f(145.0, 30.0);
    glVertex2f(135.0, 30.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 55.0);
    glVertex2f(0.0, 80.0);
    glVertex2f(10.0, 80.0);
    glVertex2f(40.0, 55.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(65.0, 55.0);
    glVertex2f(50.0, 70.0);
    glVertex2f(75.0, 70.0);
    glVertex2f(90.0, 55.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(70.0, 40.0);
    glVertex2f(100.0, 40.0);
    glVertex2f(80.0, 15.0);
    glVertex2f(50.0, 15.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);//rectangular accent
glVertex2f(0.0,45.0);//top left
glVertex2f(0.0,55.0);//top right
glVertex2f(30.0,55.0);//bottom right
glVertex2f(40.0,45.0);//bottom left
glEnd();
glPopMatrix();
}

void display5() // THIRD DISPLAY OF THE PLANE
{


    glClear(GL_COLOR_BUFFER_BIT);
    fog();

glBegin(GL_POLYGON);
     glColor3f(0.52,0.39,0.39);//Color of Middle Part
    glVertex2i(-10,300);
    glVertex2i(645,310);
       glVertex2i(940,100);
    glVertex2i(-10,100);
glEnd();

    building();
    building_window1();
    building22();
    building_window2();
    building23();
    building_window23();
    building5();
//    building_windows5();

    mountain2();
    Sun1();
    trees2();
    road();

    //clouds
    glPushMatrix();//cloud1

    glTranslatef(36, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(39, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(41, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud2

    glTranslatef(66, 420, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(69, 423, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(71, 420, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud3

    glTranslatef(96, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(99, 443, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(101, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud4

    glTranslatef(136, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(139, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(141, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud5

  glTranslatef(256, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(259, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(261, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();//cloud6

  glTranslatef(286, 420, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(289, 423, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(291, 420, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();//cloud7

  glTranslatef(316, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(319, 443, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(321, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();//cloud8

  glTranslatef(336, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(339, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(341, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();
    glPushMatrix();//cloud9

    glTranslatef(436, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(439, 443, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(441, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud10

    glTranslatef(466, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(469, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(471, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();



    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor4f(1.0f,0.5f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 30.0);
    glVertex2f(0.0, 55.0);
    glVertex2f(135.0, 55.0);
    glVertex2f(135.0, 30.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor4f(1.0f,0.5f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(135.0, 55.0);
    glVertex2f(150.0, 50.0);
    glVertex2f(155.0, 45.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(135.0, 40.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(135.0, 55.0);
    glVertex2f(150.0, 50.0);
    glVertex2f(155.0, 45.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(135.0, 40.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(135.0, 40.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(160.0, 37.0);
    glVertex2f(145.0, 30.0);
    glVertex2f(135.0, 30.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 55.0);
    glVertex2f(0.0, 80.0);
    glVertex2f(10.0, 80.0);
    glVertex2f(40.0, 55.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(65.0, 55.0);
    glVertex2f(50.0, 70.0);
    glVertex2f(75.0, 70.0);
    glVertex2f(90.0, 55.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(70.0, 40.0);
    glVertex2f(100.0, 40.0);
    glVertex2f(80.0, 15.0);
    glVertex2f(50.0, 15.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);//rectangular accent
glVertex2f(0.0,45.0);//top left
glVertex2f(0.0,55.0);//top right
glVertex2f(30.0,55.0);//bottom right
glVertex2f(40.0,45.0);//bottom left
glEnd();
glPopMatrix();
}

void display6() // THIRD DISPLAY OF THE PLANE
{


    glClear(GL_COLOR_BUFFER_BIT);
    fog();

glBegin(GL_POLYGON);
     glColor3f(0.52,0.39,0.39);//Color of Middle Part
    glVertex2i(-10,300);
    glVertex2i(645,310);
       glVertex2i(940,100);
    glVertex2i(-10,100);
glEnd();

    building();
    building_window1();
    building22();
    building_window2();
    building23();
    building_window23();
    building6();
//    building_window6());

    mountain2();
    Sun1();
    trees2();
    road();

    //clouds
    glPushMatrix();//cloud1

    glTranslatef(36, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(39, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(41, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud2

    glTranslatef(66, 420, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(69, 423, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(71, 420, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud3

    glTranslatef(96, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(99, 443, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(101, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud4

    glTranslatef(136, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(139, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(141, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud5

  glTranslatef(256, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(259, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(261, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();//cloud6

  glTranslatef(286, 420, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(289, 423, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(291, 420, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();//cloud7

  glTranslatef(316, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(319, 443, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(321, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();//cloud8

  glTranslatef(336, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(339, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(341, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();
    glPushMatrix();//cloud9

    glTranslatef(436, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(439, 443, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(441, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud10

    glTranslatef(466, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(469, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(471, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();



    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor4f(1.0f,0.5f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 30.0);
    glVertex2f(0.0, 55.0);
    glVertex2f(135.0, 55.0);
    glVertex2f(135.0, 30.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor4f(1.0f,0.5f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(135.0, 55.0);
    glVertex2f(150.0, 50.0);
    glVertex2f(155.0, 45.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(135.0, 40.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(135.0, 55.0);
    glVertex2f(150.0, 50.0);
    glVertex2f(155.0, 45.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(135.0, 40.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(135.0, 40.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(160.0, 37.0);
    glVertex2f(145.0, 30.0);
    glVertex2f(135.0, 30.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 55.0);
    glVertex2f(0.0, 80.0);
    glVertex2f(10.0, 80.0);
    glVertex2f(40.0, 55.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(65.0, 55.0);
    glVertex2f(50.0, 70.0);
    glVertex2f(75.0, 70.0);
    glVertex2f(90.0, 55.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(70.0, 40.0);
    glVertex2f(100.0, 40.0);
    glVertex2f(80.0, 15.0);
    glVertex2f(50.0, 15.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);//rectangular accent
glVertex2f(0.0,45.0);//top left
glVertex2f(0.0,55.0);//top right
glVertex2f(30.0,55.0);//bottom right
glVertex2f(40.0,45.0);//bottom left
glEnd();
glPopMatrix();
}

void display7() // THIRD DISPLAY OF THE PLANE
{


    glClear(GL_COLOR_BUFFER_BIT);
    fog();

glBegin(GL_POLYGON);
     glColor3f(0.52,0.39,0.39);//Color of Middle Part
    glVertex2i(-10,300);
    glVertex2i(645,310);
       glVertex2i(940,100);
    glVertex2i(-10,100);
glEnd();

    building();
    building_window1();
    building22();
    building_window2();
    building23();
    building_window23();
    building7();
   // building_windows3();
    mountain2();
    Sun1();
    trees2();
    road();

    //clouds
    glPushMatrix();//cloud1

    glTranslatef(36, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(39, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(41, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud2

    glTranslatef(66, 420, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(69, 423, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(71, 420, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud3

    glTranslatef(96, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(99, 443, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(101, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud4

    glTranslatef(136, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(139, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(141, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud5

  glTranslatef(256, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(259, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(261, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();//cloud6

  glTranslatef(286, 420, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(289, 423, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(291, 420, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();//cloud7

  glTranslatef(316, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(319, 443, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(321, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();//cloud8

  glTranslatef(336, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(339, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(341, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();
    glPushMatrix();//cloud9

    glTranslatef(436, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(439, 443, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(441, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud10

    glTranslatef(466, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(469, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(471, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();



    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor4f(1.0f,0.5f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 30.0);
    glVertex2f(0.0, 55.0);
    glVertex2f(135.0, 55.0);
    glVertex2f(135.0, 30.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor4f(1.0f,0.5f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(135.0, 55.0);
    glVertex2f(150.0, 50.0);
    glVertex2f(155.0, 45.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(135.0, 40.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(135.0, 55.0);
    glVertex2f(150.0, 50.0);
    glVertex2f(155.0, 45.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(135.0, 40.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(135.0, 40.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(160.0, 37.0);
    glVertex2f(145.0, 30.0);
    glVertex2f(135.0, 30.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 55.0);
    glVertex2f(0.0, 80.0);
    glVertex2f(10.0, 80.0);
    glVertex2f(40.0, 55.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(65.0, 55.0);
    glVertex2f(50.0, 70.0);
    glVertex2f(75.0, 70.0);
    glVertex2f(90.0, 55.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(70.0, 40.0);
    glVertex2f(100.0, 40.0);
    glVertex2f(80.0, 15.0);
    glVertex2f(50.0, 15.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);//rectangular accent
glVertex2f(0.0,45.0);//top left
glVertex2f(0.0,55.0);//top right
glVertex2f(30.0,55.0);//bottom right
glVertex2f(40.0,45.0);//bottom left
glEnd();
glPopMatrix();
}
void display8() // THIRD DISPLAY OF THE PLANE
{


    glClear(GL_COLOR_BUFFER_BIT);
    fog();

glBegin(GL_POLYGON);
     glColor3f(0.52,0.39,0.39);//Color of Middle Part
    glVertex2i(-10,300);
    glVertex2i(645,310);
       glVertex2i(940,100);
    glVertex2i(-10,100);
glEnd();

    building();
    building_window1();
    building22();
    building_window2();
    building23();
    building_window23();
    building8();
  //  building_windows3();

    mountain2();
    Sun1();
    trees2();
    road();

    //clouds
    glPushMatrix();//cloud1

    glTranslatef(36, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(39, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(41, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud2

    glTranslatef(66, 420, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(69, 423, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(71, 420, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud3

    glTranslatef(96, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(99, 443, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(101, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud4

    glTranslatef(136, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(139, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(141, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud5

  glTranslatef(256, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(259, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(261, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();//cloud6

  glTranslatef(286, 420, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(289, 423, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(291, 420, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();//cloud7

  glTranslatef(316, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(319, 443, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(321, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();//cloud8

  glTranslatef(336, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(339, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(341, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();
    glPushMatrix();//cloud9

    glTranslatef(436, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(439, 443, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(441, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud10

    glTranslatef(466, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(469, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(471, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();



    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor4f(1.0f,0.5f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 30.0);
    glVertex2f(0.0, 55.0);
    glVertex2f(135.0, 55.0);
    glVertex2f(135.0, 30.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor4f(1.0f,0.5f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(135.0, 55.0);
    glVertex2f(150.0, 50.0);
    glVertex2f(155.0, 45.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(135.0, 40.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(135.0, 55.0);
    glVertex2f(150.0, 50.0);
    glVertex2f(155.0, 45.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(135.0, 40.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(135.0, 40.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(160.0, 37.0);
    glVertex2f(145.0, 30.0);
    glVertex2f(135.0, 30.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 55.0);
    glVertex2f(0.0, 80.0);
    glVertex2f(10.0, 80.0);
    glVertex2f(40.0, 55.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(65.0, 55.0);
    glVertex2f(50.0, 70.0);
    glVertex2f(75.0, 70.0);
    glVertex2f(90.0, 55.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(70.0, 40.0);
    glVertex2f(100.0, 40.0);
    glVertex2f(80.0, 15.0);
    glVertex2f(50.0, 15.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);//rectangular accent
glVertex2f(0.0,45.0);//top left
glVertex2f(0.0,55.0);//top right
glVertex2f(30.0,55.0);//bottom right
glVertex2f(40.0,45.0);//bottom left
glEnd();
glPopMatrix();
}

void display9() // THIRD DISPLAY OF THE PLANE
{


    glClear(GL_COLOR_BUFFER_BIT);
    fog();

glBegin(GL_POLYGON);
     glColor3f(0.52,0.39,0.39);//Color of Middle Part
    glVertex2i(-10,300);
    glVertex2i(645,310);
       glVertex2i(940,100);
    glVertex2i(-10,100);
glEnd();

    building();
    building_window1();
    building22();
    building_window2();
    building23();
    building_window23();
    building9();
  //  building_windows();
    mountain2();
    Sun1();
    trees2();
    road();

    //clouds
    glPushMatrix();//cloud1

    glTranslatef(36, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(39, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(41, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud2

    glTranslatef(66, 420, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(69, 423, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(71, 420, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud3

    glTranslatef(96, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(99, 443, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(101, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud4

    glTranslatef(136, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(139, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(141, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud5

  glTranslatef(256, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(259, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(261, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();//cloud6

  glTranslatef(286, 420, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(289, 423, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(291, 420, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();//cloud7

  glTranslatef(316, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(319, 443, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(321, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();//cloud8

  glTranslatef(336, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(339, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(341, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
  circle(4);
  glPopMatrix();
    glPushMatrix();//cloud9

    glTranslatef(436, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(439, 443, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(441, 440, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();//cloud10

    glTranslatef(466, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(469, 403, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(471, 400, 0);
    glColor3f(0.8,0.8,0.8);//25, 10.5, 0);
    circle(4);
    glPopMatrix();



    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor4f(1.0f,0.5f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 30.0);
    glVertex2f(0.0, 55.0);
    glVertex2f(135.0, 55.0);
    glVertex2f(135.0, 30.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor4f(1.0f,0.5f,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(135.0, 55.0);
    glVertex2f(150.0, 50.0);
    glVertex2f(155.0, 45.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(135.0, 40.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(135.0, 55.0);
    glVertex2f(150.0, 50.0);
    glVertex2f(155.0, 45.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(135.0, 40.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(135.0, 40.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(160.0, 37.0);
    glVertex2f(145.0, 30.0);
    glVertex2f(135.0, 30.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 55.0);
    glVertex2f(0.0, 80.0);
    glVertex2f(10.0, 80.0);
    glVertex2f(40.0, 55.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(65.0, 55.0);
    glVertex2f(50.0, 70.0);
    glVertex2f(75.0, 70.0);
    glVertex2f(90.0, 55.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(70.0, 40.0);
    glVertex2f(100.0, 40.0);
    glVertex2f(80.0, 15.0);
    glVertex2f(50.0, 15.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);//rectangular accent
glVertex2f(0.0,45.0);//top left
glVertex2f(0.0,55.0);//top right
glVertex2f(30.0,55.0);//bottom right
glVertex2f(40.0,45.0);//bottom left
glEnd();
glPopMatrix();
}

void myinit()
{

glClearColor(0.0f,0.0f,1.0f,0.0f);
glColor3f(1.0,0.0,0.0);
glPointSize(1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,499.0,0.0,499.0);

}




void keys(unsigned char key,int x,int y)
{

    if(key=='s')
        flag=1;


    if(key=='q')
        exit(0);

    if(key=='m')
    {
      a+=5.0;    //Plane position takeoff on x axis
    b-=5.0;    //Road Strip backward movement
    c+=5;    //take off at certain angle on y axis


    if(b<=-78.0) // moving of run way
        b=0.0;;//take off at certain angle on y axis
    }

display();

}


int main(int argc, char* argv[])
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(800.0,800.0);
glutInitWindowPosition(0,0);
glutCreateWindow("Plane Crash");
glutDisplayFunc(display);
myinit();
glutKeyboardFunc(keys);
glutTimerFunc(200,update,0);
glutMainLoop();
}




