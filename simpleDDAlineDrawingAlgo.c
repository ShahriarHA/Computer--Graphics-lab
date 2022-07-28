#include<stdio.h>

int main()
{
    float x1,y1,x2,y2,m,i,j,diff_of_x,diff_of_y;

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

    if(m>0 && m<=1)
    {
        while(x1<=x2 && y1<=y2)
        {
            x1++;
            y1=y1+m;
            printf("%f %f \n",x1,y1);

        }
    }
    else if(m>1)
    {
        while(x1<=x2 && y1<=y2)
        {
            x1=x1+(1/m);
            y1++;
            printf("%f %f",x1,y1);
        }
    }

    else if(m>-1 && m<=0)
    {
        while(x1>=x2 && y1>=y2)
        {
            x1--;
            y1=y1-m;
            printf("%f %f",x1,y1);
        }
    }
    else if(m<-1)
    {

        while(x1>=x2 && y1>=y2)
        {
            x1=x1-(1/m);
            y1--;
            printf("%f %f",x1,y1);
        }
    }

    return 0;

}
