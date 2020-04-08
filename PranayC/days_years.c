#include<stdio.h>
#include<conio.h>
void main()
{
    int d,y,m,d1,d2;
    printf("enter number of days\n");
    scanf("%d",&d);
    y=d/365;
    d1=d-(y*365);
    m=d1/30;
    d2=d-(y*365)-(m*30);
    printf("years=%d\n",y);
    printf("months=%d\n",m);
    printf("days=%d\n",d2);
    getch();
}
