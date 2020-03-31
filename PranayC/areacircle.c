#include<stdio.h>
#include<conio.h>
void main()
{
    float pi=3.142,area;
    int r;
    printf("enter the radius of circle");
    scanf("%d",&r);
    area=pi*r*r;
    printf("area equals to %f",area);
    getch();
}
