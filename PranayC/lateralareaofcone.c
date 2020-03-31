#include<stdio.h>
#include<conio.h>
void main()
{
    int r,s;
    float pi=3.142,lateralarea;
    printf("Enter radius and  slant height of cone\n");
    scanf("%d %d",&r,&s);
    lateralarea=pi*r*s;
    printf("lateral surface area of cone is %f",lateralarea);
    getch();
}
