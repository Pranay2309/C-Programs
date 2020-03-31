#include<stdio.h>
#include<conio.h>
void main()
{
    double a,*p1;
    p1=&a;
    printf("%d\n",p1);
    p1++;
    printf("%d\n",p1);
    getch();
}
