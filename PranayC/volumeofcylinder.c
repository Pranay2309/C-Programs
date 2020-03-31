#include<stdio.h>
#include<conio.h>
void main()
{
    int r,h;
    float pi=3.142,volume;
    printf("Enter radius and height of cylinder\n");
    scanf("%d %d",&r,&h);
    volume=pi*r*r*h;
    printf("volume of cylinder is %f",volume);
    getch();
}
