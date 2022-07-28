#include<stdio.h>

int main()
{
    float x=0,y,x2,y2,m,i,j,p;
    int dx=0,dy=0,r;

    printf("Enter Radius : ");
    scanf("%d",&r);
    y=r;

    for(p=1-r ; x<=y ; )
    {
        if(p<0)
        {
            x++;
            y=y;
            printf("%0.2f %0.2f\n",x,y);
            p = p+(2*x)+1;
        }

        else
        {
            x++;
            y = y-1;
            printf("%0.2f %0.2f\n",x,y);
            p = p+(2*x)+1-(2*y);

        }
    }

    return 0;

}
