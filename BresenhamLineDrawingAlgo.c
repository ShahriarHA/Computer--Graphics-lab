#include<stdio.h>

int main()
{
    float x1,y1,x2,y2,m,i,j,p;
    int dx=0,dy=0;

    printf("enter the first point---\n");
    printf("Enter the value of X1 : ");
    scanf("%f",&x1);
    printf("Enter the value of Y1 : ");
    scanf("%f",&y1);

    printf("enter the second point--\n");
    printf("Enter the value of X2 : ");
    scanf("%f",&x2);
    printf("Enter the value of Y2 : ");
    scanf("%f",&y2);

    dx=x2-x1;
    dy=y2-y1;

    p=(2*dy)-dx;
    i = x1;
    j = y1;
    while(i<=x2,j<=y2)
    {
        if(p >= 0)
        {
            i++;
            j++;
            if((i>x2)||(j>y2))
            {
                break;
            }
            printf("%0.2f %0.2f\n",i,j);
            p = p+(2*dy)-(2*dx);
        }

        else if(p < 0)
        {
            i++;
            if((i>x2)||(j>y2))
            {
                break;
            }
            printf("%0.2f %0.2f\n",i,j);
            p = p+(2*dy);
        }
    }

    return 0;


}
