#include<stdio.h>
#include<conio.h>
void main()
{
    float cm,inch;
    printf("enter the value in centimeters\n");
    scanf("%f",&cm);
    inch=cm/2.54;
    printf("the value in inch =%f",inch);
    getch();
}
