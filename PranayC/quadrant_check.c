#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y;
    printf("enter the x co-ordinate of the point\n");
    scanf("%d",&x);
    printf("enter the y co-ordinate of the point\n");
    scanf("%d",&y);
    if(x>0 && y>0)
    {
        printf("the point is in 1st quadrant\n");
    }
    else
        if(x<0 && y>0)
    {
        printf("the point is in 2nd quadrant\n");
    }
    else
        if(x<0 && y<0)
    {
        printf("the point is in 3rd quadrant\n");
    }
    else
        if(x>0 && y<0)
    {
        printf("the point is in 4th quadrant\n");
    }
    else
        if(x==0 && y==0)
    {
        printf("the point lies at origin\n");
    }
    getch();
}
