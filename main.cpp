#include<stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

//global variables----
float x1,y1,x2,y2,m,i,j,diff_of_x,diff_of_y;

void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glEnd();

    glColor3f (0.0, 1.0, 0.0);
    glBegin(GL_POINTS);

    if(m>0 && m<=1)
    {
        while(x1<=x2 && y1<=y2)
        {
            x1=x1+1;
            y1=y1+m;
            glVertex3f(x1/100,y1/100,0.0);
            printf("%f %f \n",x1,y1);

        }
    }
    else if(m>1)
    {
        while(x1<=x2 && y1<=y2)
        {
            x1=x1+(1/m);
            y1=y1+1;
            glVertex3f(x1/100,y1/100,0.0);
            printf("%f %f",x1,y1);
        }
    }

    else if(m>-1 && m<=0)
    {
        while(x1>=x2 && y1>=y2)
        {
            x1=x1-1;
            y1=y1-m;
            glVertex3f(x1/100,y1/100,0.0);
            printf("%f %f",x1,y1);
        }
    }
    else if(m<-1)
    {

        while(x1>=x2 && y1>=y2)
        {
            x1=x1-(1/m);
            y1=y1-1;
            glVertex3f(x1/100,y1/100,0.0);
            printf("%f %f",x1,y1);
        }
    }

    glEnd();
    glFlush ();
}

void init (void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
    //two consecutive points(x1,y1),(x2,y2)
    printf("Enter the value of X1 : ");
    scanf("%f",&x1);
    printf("Enter the value of Y1 : ");
    scanf("%f",&y1);
    printf("Enter the value of X2 : ");
    scanf("%f",&x2);
    printf("Enter the value of Y2 : ");
    scanf("%f",&y2);

    diff_of_x=x2-x1;
    diff_of_y=y2-y1;
    m=diff_of_y/diff_of_x;

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("DDA Line Drawing Algorithm");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
