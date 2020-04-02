#include<stdio.h>
#include<conio.h>
void res(int p1,int p2,int p3);
void main()
{
    int p1,p2,p3;
    printf("enter any three numbers");
    scanf("%d %d %d",&p1,&p2,&p3);
    res(p1,p2,p3);
}
void res(int p1,int p2,int p3)
{
    int res;
    if(p1>p2 && p1>p3)
    {
        printf("p1 is greater");
    }
    if(p2>p1 && p2>p3)
    {
        printf("p2 is greater");
    }
    else
    {
        printf("p3 is greater");
    }
    getch();
}
