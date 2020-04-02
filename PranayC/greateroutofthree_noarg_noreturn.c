#include<stdio.h>
#include<conio.h>
void res();
void main()
{
    res();
}
void res()
{
    int p1,p2,p3;
    printf("enter any three numbers");
    scanf("%d %d %d",&p1,&p2,&p3);
    int res;
    if(p1>p2 && p1>p3)
    {
        printf("p1 is greater\n");
    }
    if(p2>p1 && p2>p3)
    {
        printf("p2 is greater\n");
    }
    if(p3>p1 && p3>p2)
    {
        printf("p3 is greater\n");
    }
    getch();
}
