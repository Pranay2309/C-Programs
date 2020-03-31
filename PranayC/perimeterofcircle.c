#include<stdio.h>
#include<conio.h>
void main()
{
    int r;
    float pi=3.142,perimeter;
    printf("Enter radius of circle\n");
    scanf("%d",&r);
    perimeter=2*pi*r;
    printf("perimeter of circle is %f",perimeter);
    getch();
}
