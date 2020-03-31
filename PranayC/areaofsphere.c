#include<stdio.h>
#include<conio.h>
void main()
{
    int r;
    float pi=3.142,area;
    printf("Enter radius of sphere\n");
    scanf("%d",&r);
    area=4*pi*r*r;
    printf("area of sphere is %f",area);
    getch();
}
