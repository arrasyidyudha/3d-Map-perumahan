#include <GL/glut.h>
#include <GL/glu.h>
#include <math.h>
#include <iostream>
using namespace std;

float cc[20][2];

void init(void);
void display(void);
void keyboard(unsigned char, int, int);
void resize(int, int);
void house(float,float,float);
void mall(float,float,float);
void car(float,float,float);
void circle1(float);

float  h=5,h1=6,d1=4,g=1,g1=2;

int main (int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1100, 1100);
	glutInitWindowPosition(100, 10);
	glutCreateWindow("3D map perumahan");
	init();

	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);

	glutReshapeFunc(resize);

	glutMainLoop();
	return 0;
}

void mall(float x,float y,float z)
{
	int i;
	int j;
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(x,y,z+0.5);
	glVertex3f(x+45,y,z+0.5);
	glVertex3f(x+45,y+100,z+0.5);
 	glVertex3f(x,y+100,z+0.5);
	glEnd();  glColor3f(0.8,0.8,0.8);
for(j=0;j<8;j++)
{

	glPushMatrix();
		glTranslatef(0,-12*j,0);
	for(i=0;i<4;i++)
	{
		glPushMatrix();
		glTranslatef(11*i,0,0);
	glBegin(GL_POLYGON);
	glVertex3f(x+2,y+98,z);
	glVertex3f(x+10,y+98,z);
	glVertex3f(x+10,y+88,z);
 	glVertex3f(x+2,y+88,z);
	glEnd();
	glPopMatrix();
	}glPopMatrix();
}glColor3f(0,0,0);
for(j=0;j<8;j++)
{

	glPushMatrix();
		glTranslatef(0,-12*j,0);
	for(i=0;i<4;i++)
	{
		glPushMatrix();
		glTranslatef(11*i,0,0);
		glBegin(GL_LINE_LOOP);
	glVertex3f(x+2,y+98,z);
	glVertex3f(x+10,y+98,z);
	glVertex3f(x+10,y+88,z);
 	glVertex3f(x+2,y+88,z);
	glEnd();
	glPopMatrix();
	}glPopMatrix();
}

glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(x,y,z+45-0.5);
	glVertex3f(x+45,y,z+45-0.5);
	glVertex3f(x+45,y+100,z+45-0.5);
 	glVertex3f(x,y+100,z+45-0.5);
	glEnd();  	glColor3f(0.8,0.8,0.8);

for(j=0;j<8;j++)
{

	glPushMatrix();
		glTranslatef(0,-12*j,0);
	for(i=0;i<4;i++)
	{
		glPushMatrix();
		glTranslatef(11*i,0,0);
	glBegin(GL_POLYGON);
	glVertex3f(x+2,y+98,z+45);
	glVertex3f(x+10,y+98,z+45);
	glVertex3f(x+10,y+88,z+45);
 	glVertex3f(x+2,y+88,z+45);
	glEnd();
	glPopMatrix();
	}glPopMatrix();
}glColor3f(0,0,0);

for(j=0;j<8;j++)
{

	glPushMatrix();
		glTranslatef(0,-12*j,0);
	for(i=0;i<4;i++)
	{
		glPushMatrix();
		glTranslatef(11*i,0,0);
	glBegin(GL_LINE_LOOP);
	glVertex3f(x+2,y+98,z+45);
	glVertex3f(x+10,y+98,z+45);
	glVertex3f(x+10,y+88,z+45);
 	glVertex3f(x+2,y+88,z+45);
	glEnd();
	glPopMatrix();
	}glPopMatrix();
}

glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(x+0.5,y,z);
	glVertex3f(x+0.5,y,z+45);
	glVertex3f(x+0.5,y+100,z+45);
 	glVertex3f(x+0.5,y+100,z);
	glEnd();
	glColor3f(0.8,0.8,0.8);
for(j=0;j<8;j++)
{

	glPushMatrix();
		glTranslatef(0,-12*j,0);
	for(i=0;i<4;i++)
	{
		glPushMatrix();
		glTranslatef(0,0,11*i);
	glBegin(GL_POLYGON);
	glVertex3f(x,y+98,z+2);
	glVertex3f(x,y+98,z+10);
	glVertex3f(x,y+88,z+10);
 	glVertex3f(x,y+88,z+2);
	glEnd();
	glPopMatrix();
	}glPopMatrix();
}glColor3f(0,0,0);
for(j=0;j<8;j++)
{

	glPushMatrix();
		glTranslatef(0,-12*j,0);
	for(i=0;i<4;i++)
	{
		glPushMatrix();
		glTranslatef(0,0,11*i);
		glBegin(GL_LINE_LOOP);
	glVertex3f(x,y+98,z+2);
	glVertex3f(x,y+98,z+10);
	glVertex3f(x,y+88,z+10);
 	glVertex3f(x,y+88,z+2);
	glEnd();
	glPopMatrix();
	}glPopMatrix();
}

glColor3f(0.6,0.6,0.6);

	glBegin(GL_POLYGON);
	glVertex3f(x+45-0.5,y,z-0.5);
	glVertex3f(x+45-0.5,y,z+45-0.5);
	glVertex3f(x+45-0.5,y+100,z+45-0.5);
 	glVertex3f(x+45-0.5,y+100,z-0.5);
	glEnd(); glColor3f(0.8,0.8,0.8);
for(j=0;j<8;j++)
{

	glPushMatrix();
		glTranslatef(0,-12*j,0);
	for(i=0;i<4;i++)
	{
		glPushMatrix();
		glTranslatef(0,0,11*i);
	glBegin(GL_POLYGON);
	glVertex3f(x+45,y+98,z+2);
	glVertex3f(x+45,y+98,z+10);
	glVertex3f(x+45,y+88,z+10);
 	glVertex3f(x+45,y+88,z+2);
	glEnd();
	glPopMatrix();
	}glPopMatrix();
}
glColor3f(0,0,0);
for(j=0;j<8;j++)
{

	glPushMatrix();
		glTranslatef(0,-12*j,0);
	for(i=0;i<4;i++)
	{
		glPushMatrix();
		glTranslatef(0,0,11*i);
		glBegin(GL_LINE_LOOP);
	glVertex3f(x+45,y+98,z+2);
	glVertex3f(x+45,y+98,z+10);
	glVertex3f(x+45,y+88,z+10);
 	glVertex3f(x+45,y+88,z+2);
	glEnd();
	glPopMatrix();
	}glPopMatrix();
}

glColor3f(0.5,0.5,0.5);
glBegin(GL_POLYGON);
	glVertex3f(x,y,z-0.5);
	glVertex3f(x+45,y,z-0.5);
	glVertex3f(x+45,y,z+45-0.5);
 	glVertex3f(x,y,z+45-0.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(x,y+100,z);
	glVertex3f(x+45,y+100,z);
	glVertex3f(x+45,y+100,z+45);
 	glVertex3f(x,y+100,z+45);
	glEnd();
}
void house(float x,float y,float z)
{
    //warna dinding samoing kanan
	glColor3f(0.1,0.1,0.1);
	glBegin(GL_POLYGON);
	glVertex3f(x,y,z);
	glVertex3f(x,y,z+30);
	glVertex3f(x,y+15,z+30);
	glVertex3f(x,y+15,z);
	glEnd();
    // warna dinding samping kiri
	glColor3f(2,2,2);
	glBegin(GL_POLYGON);
	glVertex3f(x-15,y,z);
	glVertex3f(x-15,y+15,z);
	glVertex3f(x-15,y+15,z+30);
	glVertex3f(x-15,y,z+30);
	glEnd();
    //warna dinding depan
	glColor3f(0.1,0.1,0.1);
	glBegin(GL_POLYGON);
	glVertex3f(x,y,z+30);
	glVertex3f(x-15,y,z+30);
	glVertex3f(x-15,y+15,z+30);
	glVertex3f(x,y+15,z+30);
	glEnd();
// warna dinding belakang
	glColor3f(0.4,0.4,0.4);
	glBegin(GL_POLYGON);
	glVertex3f(x-15,y,z);
	glVertex3f(x-15,y+15,z);
	glVertex3f(x,y+15,z);
	glVertex3f(x,y,z);
	glEnd();

	glColor3f(0.4,0.4,0.4);
	glBegin(GL_POLYGON);
	glVertex3f(x-15,y,z);
	glVertex3f(x,y,z);
	glVertex3f(x,y,z+30);
	glVertex3f(x-15,y,z+30);
	glEnd();

//warna atap atas kanan dan kiri
	glColor3f(0.3,0.3,0.3);
	glBegin(GL_POLYGON);
	glVertex3f(x+1.69*3,y+3.5*3,z);
	glVertex3f(x-2.5*3,y+7.5*3,z);
	glVertex3f(x-2.5*3,y+7.5*3,z+30);
	glVertex3f(x+1.69*3,y+3.5*3,z+30);
	glEnd();


	glColor3f(0.3,0.3,0.3);
	glBegin(GL_POLYGON);
	glVertex3f(x-6.69*3,y+3.5*3,z);
	glVertex3f(x-6.69*3,y+3.5*3,z+30);
	glVertex3f(x-2.5*3,y+7.5*3,z+30);
	glVertex3f(x-2.5*3,y+7.5*3,z);
	glEnd();

//warna atap depan dan belakang
glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	glVertex3f(x,y+15,z);
	glVertex3f(x-15,y+5,z);
	glVertex3f(x-2.5*3,y+7.5*3,z);
	glEnd();

glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	glVertex3f(x,y+15,z+30);
	glVertex3f(x-15,y+15,z+30);
	glVertex3f(x-2.5*3,y+7.5*3,z+30);
	glEnd();
}




void car(float x,float y,float z)
{



    // top filling
glBegin(GL_POLYGON);

 glVertex3f(-0.1,0.6,0.7);//o
 glVertex3f(-0.1,0.6,-0.7);//o'
 glVertex3f(-1.02,0.6,-0.7);//p'
 glVertex3f(-1.02,0.6,0.7);//p
glEnd();


glBegin(GL_POLYGON);
 glVertex3f(-0.1,0.6,0.7);//o
 glVertex3f(-0.1,0.6,-0.7);//o'
 glVertex3f(.52,0.56,-0.7);//n'
 glVertex3f(.52,0.56,0.7);//n
glEnd();

//back filling
glBegin(GL_POLYGON);
 glVertex3f(-1.2,0.22,0.7);//q
 glVertex3f(-1.2,0.22,-0.7);//q'
 glVertex3f(-1.2,-.28,-0.7);//r'
 glVertex3f(-1.2,-.28,0.7);//r
glEnd();






glBegin(GL_POLYGON);
 glVertex3f(1.52,.14,0.7);//k
 glVertex3f(1.14,0.22,0.7);//l
 glVertex3f(1.14,0.22,-0.7);//l'
 glVertex3f(1.52,.14,-0.7);//k'
glEnd();

glBegin(GL_POLYGON);
 glVertex3f(0.76,.22,0.7);//m
 glVertex3f(0.76,.22,-0.7);//m'
 glVertex3f(1.14,0.22,-0.7);//l'
 glVertex3f(1.14,0.22,0.7);//l
glEnd();

glBegin(GL_POLYGON);
 glVertex3f(-1.12,-.48,0.7);//a
 glVertex3f(-0.86,-.48,0.7);//b
 glVertex3f(-.74,-0.2,0.7);//c
 glVertex3f(-0.64,0.22,0.7);//cc
 glVertex3f(-1.08,0.22,0.7);//dd
 glVertex3f(-1.2,0.22,0.7);//q
 glVertex3f(-1.2,-.28,0.7);//r
glEnd();

glBegin(GL_POLYGON);
glVertex3f(-.74,-0.2,0.7);//c
glVertex3f(-0.64,0.22,0.7);//cc
glVertex3f(-0.5,0.22,0.7);//hh
glVertex3f(-0.5,-0.2,0.7);//pp
glEnd();
glBegin(GL_POLYGON);
glVertex3f(0.0,0.22,0.7);//gg
glVertex3f(1.14,0.22,0.7);//l
glVertex3f(1.24,-.2,0.7);//h
glVertex3f(0.0,-0.2,0.7);//oo



glEnd();
//
glBegin(GL_POLYGON);

 glVertex3f(-1.12,-.48,-0.7);//a'
 glVertex3f(-0.86,-.48,-0.7);//b'
 glVertex3f(-.74,-0.2,-0.7);//c'
 glVertex3f(-0.64,0.22,-0.7);//cc'
 glVertex3f(-1.08,0.22,-0.7);//dd'
 glVertex3f(-1.2,0.22,-0.7);//q'
 glVertex3f(-1.2,-.28,-0.7);//r'
glEnd();

glBegin(GL_POLYGON);

glVertex3f(-.74,-0.2,-0.7);//c'
glVertex3f(-0.64,0.22,-0.7);//cc'
glVertex3f(-0.5,0.22,-0.7);//hh'
glVertex3f(-0.5,-0.2,-0.7);//pp'

glEnd();
glBegin(GL_POLYGON);
glVertex3f(0.0,0.22,-0.7);//gg'
glVertex3f(1.14,0.22,-0.7);//l'
glVertex3f(1.24,-.2,-0.7);//h'
glVertex3f(0.0,-0.2,-0.7);//oo'

glEnd();


glBegin(GL_POLYGON);
glVertex3f(-1.2,0.22,0.7);//q
glVertex3f(-1.08,0.22,0.7);//dd
glVertex3f(-0.98,0.5,0.7);//aa
glVertex3f(-1.02,0.6,0.7);//p
glEnd();


glBegin(GL_POLYGON);
glVertex3f(-1.02,0.6,0.7);//p
glVertex3f(-0.98,0.5,0.7);//aa
glVertex3f(0.44,0.5,0.7);//jj
glVertex3f(.52,0.56,0.7);//n
glVertex3f(-0.1,0.6,0.7);//0
glEnd();

glBegin(GL_POLYGON);
glVertex3f(-0.64,0.5,0.7);//bb
glVertex3f(-0.64,0.22,0.7);//cc
glVertex3f(-0.5,0.22,0.7);//hh
glVertex3f(-0.5,0.5,0.7);//ee
glEnd();

glBegin(GL_POLYGON);
glVertex3f(0.0,0.5,0.7);//ff
glVertex3f(0.0,0.22,0.7);//gg
glVertex3f(0.12,0.22,0.7);//ll
glVertex3f(0.12,0.5,0.7);//ii
glEnd();

glBegin(GL_POLYGON);
glVertex3f(.52,0.56,0.7);//n
glVertex3f(0.44,0.5,0.7);//jj
glVertex3f(0.62,0.22,0.7);//kk
glVertex3f(0.76,.22,0.7);//m
glEnd();

glBegin(GL_POLYGON);
glVertex3f(-.42,-.2,0.7);//d
glVertex3f(.94,-0.2,0.7);//g
glVertex3f(.81,-0.48,0.7);//f
glVertex3f(-0.3,-.48,0.7);//e
glEnd();

glBegin(GL_POLYGON);
glVertex3f(1.14,0.22,0.7);//l
glVertex3f(1.52,.14,0.7);//k
glVertex3f(1.52,-.44,0.7);//j
glVertex3f(1.38,-.48,0.7);//i
glVertex3f(1.24,-.2,0.7);//h
glEnd();

glBegin(GL_POLYGON);
glVertex3f(-1.2,0.22,-0.7);//q'
glVertex3f(-1.08,0.22,-0.7);//dd'
glVertex3f(-0.98,0.5,-0.7);//aa'
glVertex3f(-1.02,0.6,-0.7);//p'
glEnd();

glBegin(GL_POLYGON);
glVertex3f(-1.02,0.6,-0.7);//p'
glVertex3f(-0.98,0.5,-0.7);//aa'
glVertex3f(0.44,0.5,-0.7);//jj'
glVertex3f(.52,0.56,-0.7);//n'
glVertex3f(-0.1,0.6,-0.7);//0'
glEnd();

glBegin(GL_POLYGON);
glVertex3f(-0.64,0.5,-0.7);//bb'
glVertex3f(-0.64,0.22,-0.7);//cc'
glVertex3f(-0.5,0.22,-0.7);//hh'
glVertex3f(-0.5,0.5,-0.7);//ee'
glEnd();

glBegin(GL_POLYGON);
glVertex3f(0.0,0.5,-0.7);//ff'
glVertex3f(0.0,0.22,-0.7);//gg'
glVertex3f(0.12,0.22,-0.7);//ll'
glVertex3f(0.12,0.5,-0.7);//ii'
glEnd();

glBegin(GL_POLYGON);
glVertex3f(.52,0.56,-0.7);//n'
glVertex3f(0.44,0.5,-0.7);//jj'
glVertex3f(0.62,0.22,-0.7);//kk'
glVertex3f(0.76,.22,-0.7);//m'
glEnd();

glBegin(GL_POLYGON);
glVertex3f(-.42,-.2,-0.7);//d'
glVertex3f(.94,-0.2,-0.7);//g'
glVertex3f(.81,-0.48,-0.7);//f'
glVertex3f(-0.3,-.48,-0.7);//e'
glEnd();

glBegin(GL_POLYGON);
glVertex3f(1.14,0.22,-0.7);//l'
glVertex3f(1.52,.14,-0.7);//k'
glVertex3f(1.52,-.44,-0.7);//j'
glVertex3f(1.38,-.48,-0.7);//i'
glVertex3f(1.24,-.2,-0.7);//h'
glEnd();


// door1 body- rear, near
glBegin(GL_POLYGON);
glVertex3f(-0.5,0.22,0.7);//hh
glVertex3f(0.0,0.22,0.7);//gg
glVertex3f(0.0,-0.2,0.7);//oo
glVertex3f(-0.5,-0.2,0.7);//pp
glEnd();

// door body- rear, far
glBegin(GL_POLYGON);
glVertex3f(-0.5,0.22,-0.7);//hh'
glVertex3f(0.0,0.22,-0.7);//gg'
glVertex3f(0.0,-0.2,-0.7);//oo'
glVertex3f(-0.5,-0.2,-0.7);//pp'
glEnd();

// door2  body- near, driver

glBegin(GL_POLYGON);
glVertex3f(0.12,0.22,0.7);//ll
glVertex3f(0.62,0.22,0.7);//kk
glVertex3f(0.62,-0.2,0.7);//mm
glVertex3f(0.12,-0.2,0.7);//nn
glEnd();



// door2  body- far, driver

glBegin(GL_POLYGON);
 glVertex3f(0.12,0.22,-0.7);//ll'
glVertex3f(0.62,0.22,-0.7);//kk'
glVertex3f(0.62,-0.2,-0.7);//mm'
glVertex3f(0.12,-0.2,-0.7);//nn'
glEnd();

glBegin(GL_POLYGON);//front**
 glVertex3f(1.52,.14,0.7);//k
 glVertex3f(1.52,.14,-0.7);//k'
 glVertex3f(1.52,-.44,-0.7);//j'
 glVertex3f(1.52,-.44,0.7);//j
glEnd();

glTranslatef(-.58,-.52,0.7);//translate to 1st tyre
glColor3f(0.09,0.09,0.09);// tyre color********
glutSolidTorus(0.12f, .14f, 10, 25);
glTranslatef(1.68,0.0,0.0);//translate to 2nd tyre
glutSolidTorus(0.12f, .14f, 10, 25);

glTranslatef(0.0,0.0,-1.4);//translate to 3rd tyre
glutSolidTorus(0.12f, .14f, 10, 25);
glTranslatef(-1.68,0.0,0.0);//translate to 4th tyre which is behind 1st tyre i.e rear .back
glutSolidTorus(0.12f, .14f, 10, 25);
glTranslatef(.58,.52,0.7);//translate to origin
glRotatef(90.0,0.0,1.0,0.0);
glTranslatef(0.0,0.0,-1.40);

glutSolidTorus(0.2f, .2f, 10, 25);

glTranslatef(0.0,0.0,1.40);
glRotatef(270.0,0.0,1.0,0.0);


//bottom filling
glBegin(GL_POLYGON);
glColor3f(0.25,0.25,0.25);
 glVertex3f(-0.3,-.48,0.7);//e
 glVertex3f(-0.3,-.48,-0.7);//e'
 glVertex3f(.81,-0.48,-0.7);//f'
 glVertex3f(.81,-0.48,0.7);//f
glEnd();




glBegin(GL_POLYGON);
 glVertex3f(-.42,-.2,0.7);//d
 glVertex3f(-.42,-.2,-0.7);//d'
 glVertex3f(-0.3,-.48,-0.7);//e'
 glVertex3f(-0.3,-.48,0.7);//e
glEnd();

glBegin(GL_POLYGON);

glVertex3f(-1.2,-.28,0.7);//r
glVertex3f(-1.2,-.28,-0.7);//r'
glVertex3f(-1.12,-.48,-0.7);//a'
glVertex3f(-1.12,-.48,0.7);//a

glEnd();

glBegin(GL_POLYGON);
 glVertex3f(-1.12,-.48,0.7);//a
 glVertex3f(-1.12,-.48,-0.7);//a'
 glVertex3f(-0.86,-.48,-0.7);//b'
 glVertex3f(-0.86,-.48,0.7);//b
glEnd();

glBegin(GL_POLYGON);
 glVertex3f(-0.86,-.48,0.7);//b
 glVertex3f(-0.86,-.48,-0.7);//b'
 glVertex3f(-.74,-0.2,-0.7);//c'
 glVertex3f(-.74,-0.2,0.7);//c
glEnd();

glBegin(GL_POLYGON);
 glVertex3f(-.74,-0.2,0.7);//c
 glVertex3f(-.74,-0.2,-0.7);//c'
 glVertex3f(-.42,-.2,-0.7);//d'
 glVertex3f(-.42,-.2,0.7);//d
glEnd();

glBegin(GL_POLYGON);
 glVertex3f(.81,-0.48,0.7);//f
 glVertex3f(.81,-0.48,-0.7);//f'
 glVertex3f(.94,-0.2,-0.7);//g'
 glVertex3f(.94,-0.2,0.7);//g
glEnd();

glBegin(GL_POLYGON);
 glVertex3f(.94,-0.2,0.7);//g
 glVertex3f(.94,-0.2,-0.7);//g'
 glVertex3f(1.24,-.2,-0.7);//h'
 glVertex3f(1.24,-.2,0.7);//h
glEnd();

glBegin(GL_POLYGON);
 glVertex3f(1.24,-.2,0.7);//h
 glVertex3f(1.24,-.2,-0.7);//h'
 glVertex3f(1.38,-.48,-0.7);//i'
 glVertex3f(1.38,-.48,0.7);//i
glEnd();

glBegin(GL_POLYGON);
 glVertex3f(1.38,-.48,0.7);//i
 glVertex3f(1.38,-.48,-0.7);//i'
 glVertex3f(1.52,-.44,-0.7);//j'
 glVertex3f(1.52,-.44,0.7);//j
glEnd();




//********************************************************************************************8


// door outline- rear, front
glBegin(GL_LINE_LOOP);
glColor3f(1.0,1.0,1.0);
glVertex3f(-0.5,0.22,0.7);//hh
glVertex3f(0.0,0.22,0.7);//gg
glVertex3f(0.0,-0.2,0.7);//oo
glVertex3f(-0.5,-0.2,0.7);//pp


glEnd();



// door2 outline- near, driver

glBegin(GL_LINE_LOOP);

glVertex3f(0.12,0.22,0.7);//ll
glVertex3f(0.62,0.22,0.7);//kk
glVertex3f(0.62,-0.2,0.7);//mm
glVertex3f(0.12,-0.2,0.7);//nn
glEnd();


glColor3f(0.0,0.0,0.0);
// door2  outline- far, driver

glBegin(GL_LINE_LOOP);

glVertex3f(0.12,0.22,-0.7);//ll'
glVertex3f(0.62,0.22,-0.7);//kk'
glVertex3f(0.62,-0.2,-0.7);//mm'
glVertex3f(0.12,-0.2,-0.7);//nn'
glEnd();

// door outline- rear, far
glBegin(GL_LINE_LOOP);

glVertex3f(-0.5,0.22,-0.7);//hh'
glVertex3f(0.0,0.22,-0.7);//gg'
glVertex3f(0.0,-0.2,-0.7);//oo'
glVertex3f(-0.5,-0.2,-0.7);//pp'


glEnd();
glBegin(GL_POLYGON);//front**
glVertex3f(1.52,.14,0.7);//k
glVertex3f(1.52,.14,-0.7);//k'
glVertex3f(1.52,-.44,-0.7);//j'
glVertex3f(1.52,-.44,0.7);//j

glEnd();

glColor3f(0.0,0.0,1.0);

// transparent objects are placed next ..

 glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);//TRANCPARENCY3

//windscreen
 glBegin(GL_POLYGON);
glColor4f(0.0,0.0,0.0,0.7);   //COLOR =WHITE TRANSPARENT
 glVertex3f(0.562,.5,.6);//AAA
 glVertex3f(.562,.5,-.6);//AAA'
 glVertex3f(.76,.22,-.6);//MMM'
 glVertex3f(.76,.22,.6);//MMM

glEnd();
//rear window
glBegin(GL_POLYGON);
   //COLOR =WHITE TRANSPARENT

 glVertex3f(-1.068,0.5,0.6);//pp
 glVertex3f(-1.068,0.5,-0.6);//pp'
 glVertex3f(-1.2,0.22,-0.6);//qq'
 glVertex3f(-1.2,0.22,0.6);//qq

glEnd();
//leftmost window front
glBegin(GL_POLYGON);
 glVertex3f(-0.98,0.5,0.7);//aa
 glVertex3f(-0.64,0.5,0.7);//bb
 glVertex3f(-0.64,0.22,0.7);//cc
 glVertex3f(-1.08,0.22,0.7);//dd
glEnd();

//leftmost window back
glBegin(GL_POLYGON);

 glVertex3f(-0.98,0.5,-0.7);//aa
 glVertex3f(-0.64,0.5,-0.7);//bb
 glVertex3f(-0.64,0.22,-0.7);//cc
 glVertex3f(-1.08,0.22,-0.7);//dd
glEnd();

//middle window front

glBegin(GL_POLYGON);

glVertex3f(-0.5,0.5,0.7);
glVertex3f(0.0,0.5,0.7);
glVertex3f(0.0,0.22,0.7);
glVertex3f(-0.5,0.22,0.7);

glEnd();




//middle window back

glBegin(GL_POLYGON);

glVertex3f(-0.5,0.5,-0.7);
glVertex3f(0.0,0.5,-0.7);
glVertex3f(0.0,0.22,-0.7);
glVertex3f(-0.5,0.22,-0.7);

glEnd();
//rightmost window front

glBegin(GL_POLYGON);

glVertex3f(0.12,0.5,0.7);//ii
glVertex3f(0.44,0.5,0.7);//jj
glVertex3f(0.62,0.22,0.7);//kk
glVertex3f(0.12,0.22,0.7);//ll


glEnd();


//rightmost window back

glBegin(GL_POLYGON);

glVertex3f(0.12,0.5,-0.7);//ii'
glVertex3f(0.44,0.5,-0.7);//jj'
glVertex3f(0.62,0.22,-0.7);//kk'
glVertex3f(0.12,0.22,-0.7);//ll'


glEnd();


////car code ends here
glColor3f(0.0,0.0,1.0);
}

// pengatur posisi rumah

void house1()
{

	house(120,0.1,50);

	house(120,0.1,90);

	house(160,0.1,90);

	house(80,0.1,90);

	house(40,0.1,40);

	house(160,0.1,50);

    house(80,0.1,50);

    house(-130,0.1,120);

    house(-130,0.1,160);

    house(-90,0.1,120);

	house(-60,0.1,120);

    house(-90,0.1,160);

    house(-60,0.1,160);

    house(-40,0.1,40);

    house(-150,0.1,60);

    mall(80,0,-90);

    mall(100,0,-120);

    car(60,0,-90);
    car(40,0,60);





}


//pohon
void circle1(float c[20][2])
{
float x=0,y=03;
int i;
for(i=0;i<20;i++)
{
c[i][0]=x*cos((i+1)*36*(3.142/360))-y*sin((i+1)*36*(3.142/360));
c[i][1]=x*sin((i+1)*36*(3.142/360))+y*cos((i+1)*36*(3.142/360));
}

for(i=0;i<19;i++)
{
	glBegin(GL_POLYGON);
glVertex3f(c[i][0],c[i][1],0);
glVertex3f(c[i][0],c[i][1],40);
glVertex3f(c[i+1][0],c[i+1][1],40);
glVertex3f(c[i+1][0],c[i+1][1],0);
glEnd();
}

glBegin(GL_POLYGON);
glVertex3f(c[0][0],c[0][1],0);
glVertex3f(c[0][0],c[0][1],40);
glVertex3f(c[19][0],c[19][1],40);
glVertex3f(c[19][0],c[19][1],0);
glEnd();

}





void init(void)
{
		glClearColor(0.0,0.0,0.0,0.0);
glEnable(GL_DEPTH_TEST);
	glMatrixMode(GL_MODELVIEW);
}




void display(void)
{
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	/* draw the floor */
	glBegin(GL_QUADS);
	glColor3f(0.2,0.7,0.4);
        glVertex3f(-200.0, 0.0, -200.0);
			glColor3f(0.2,0.7,0.4);
glVertex3f(-200.0, 0.0, 200.0);
	glColor3f(0.2,0.7,0.4);
		glVertex3f(200.0, 0.0, 200.0);
	glColor3f(0.2,0.7,0.4);
		glVertex3f(200.0, 0.0, -200.0);
	glEnd();
	glFlush();

    glColor3f(0.3,0.015,0.13);
    glPushMatrix();
	glTranslatef(-15,1,50);
    glutSolidCube(7);
    glPopMatrix();

    glColor3f(0.3,0.015,0.13);
    glPushMatrix();
	glTranslatef(-15,1,-40);
    glutSolidCube(7);
    glPopMatrix();

    glColor3f(0.3,0.015,0.13);
    glPushMatrix();
	glTranslatef(-15,1,20);
    glutSolidCube(7);
    glPopMatrix();

    glColor3f(0.3,0.015,0.13);
    glPushMatrix();
	glTranslatef(-15,1,-10);
    glutSolidCube(7);
    glPopMatrix();

    glColor3f(0.3,0.015,0.13);
    glPushMatrix();
	glTranslatef(-15,1,-80);
    glutSolidCube(7);
    glPopMatrix();

    glColor3f(0.3,0.015,0.13);
    glPushMatrix();
	glTranslatef(-15,1,-120);
    glutSolidCube(7);
    glPopMatrix();

    glColor3f(0.3,0.015,0.13);
    glPushMatrix();
	glTranslatef(-15,1,-160);
    glutSolidCube(7);
    glPopMatrix();




    glColor3f(0.015,0.3,0.13);
    glPushMatrix();
    glTranslatef(-15,24,50);
    glScalef(1.1,2.3,0.8);
	glutSolidSphere(10,15,6);
	glFlush();
	glPopMatrix();

    glColor3f(0.015,0.3,0.13);
    glPushMatrix();
    glTranslatef(-15,24,-40);
    glScalef(1.1,2.3,0.8);
	glutSolidSphere(10,15,4);
	glFlush();
	glPopMatrix();

	glColor3f(0.015,0.3,0.13);
    glPushMatrix();
    glTranslatef(-15,24,20);
    glScalef(1.1,2.3,0.8);
	glutSolidSphere(10,15,4);
	glFlush();
	glPopMatrix();

	glColor3f(0.015,0.3,0.13);
    glPushMatrix();
    glTranslatef(-15,24,-10);
    glScalef(1.1,2.3,0.8);
	glutSolidSphere(10,15,4);
	glFlush();
	glPopMatrix();

    glColor3f(0.015,0.3,0.13);
    glPushMatrix();
    glTranslatef(-15,24,-80);
    glScalef(1.1,2.3,0.8);
	glutSolidSphere(10,15,4);
	glFlush();
	glPopMatrix();

    glColor3f(0.015,0.3,0.13);
    glPushMatrix();
    glTranslatef(-15,24,-120);
    glScalef(1.1,2.3,0.8);
	glutSolidSphere(10,15,4);
	glFlush();
	glPopMatrix();

    glColor3f(0.015,0.3,0.13);
    glPushMatrix();
    glTranslatef(-15,24,-160);
    glScalef(1.1,2.3,0.8);
	glutSolidSphere(10,15,4);
	glFlush();
	glPopMatrix();


	glBegin(GL_QUADS);
        glColor3f(0.2, 0.2, 0.2);
        glVertex3f(0,0.01,-200); /* road */
		glColor3f(0.2, 0.2, 0.2);
		glVertex3f(0,0.01,200);
		glColor3f(0.2, 0.2, 0.2);
		glVertex3f(18,0.01,200);
		glColor3f(0.2, 0.2, 0.2);
		glVertex3f(18,0.01,-200);
		glEnd();

	glBegin(GL_QUADS);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3f(8.5,0.02,-200); /* road */
		glColor3f(1.0, 1.0, 1.0);
		glVertex3f(8.5,0.02,200);
		glColor3f(1.0, 1.0, 1.0);
		glVertex3f(9.5,0.02,200);
		glColor3f(1.0, 1.0, 1.0);
		glVertex3f(9.5,0.02,-200);
		glEnd();

glBegin(GL_QUADS);
        glColor3f(0.2, 0.2, 0.2);
        glVertex3f(44,0.01,-200); /* road */
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(44,0.01,160);
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(54,0.01,160);
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(54,0.01,-200);
		glEnd();

		glBegin(GL_QUADS);
        glColor3f(0.2, 0.2, 0.2);
        glVertex3f(54,0.01,-180); /* road */
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(54,0.01,-160);
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(200,0.01,-160);
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(200,0.01,-180);
		glEnd();


glBegin(GL_QUADS);
        glColor3f(0.2, 0.2, 0.2);
        glVertex3f(18,0.01,160); /* road */
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(18,0.01,170);
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(200,0.01,170);
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(200,0.01,160);
		glEnd();


glBegin(GL_QUADS);
        glColor3f(0.2, 0.2, 0.2);
        glVertex3f(-200,0.01,90); /* road */
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(-200,0.01,100);
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(0,0.01,100);
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(0,0.01,90);
		glEnd();

glBegin(GL_QUADS);
        glColor3f(0.2, 0.2, 0.2);
        glVertex3f(-90,0.01,-200); /* road */
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(-90,0.01,90);
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(-80,0.01,90);
		glColor3f(0.2, 0.2, 0.2);
        glVertex3f(-80,0.01,-200);
		glEnd();
	house1();
	glFlush();
	glutSwapBuffers();


}


void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 'a':
	case 'A':
		glTranslatef(5.0, 0.0, 0.0);
		break;
	case 'd':
	case 'D':
		glTranslatef(-5.0, 0.0, 0.0);
		break;
	case 'w':
	case 'W':
		glTranslatef(0.0, 0.0, 5.0);
		break;
	case 's':
	case 'S':
		glTranslatef(0.0, 0.0, -5.0);
		break;
	case 'q':
	case 'Q':
            glRotatef(-2,1.0,0.0,0.0);

    case 'e':
    case 'E':
            glRotatef(2,0.0,1.0,0.0);

	}
	display();
}

void resize(int width, int height)
{
	if (height == 0) height = 1;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

gluPerspective(80.0, width / height, 1.0, 600.0);

	glTranslatef(0.0, -15.0, -320.0);

	glMatrixMode(GL_MODELVIEW);
}


