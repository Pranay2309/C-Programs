#include<stdio.h>
#include<conio.h>
void main()
{
    int p,r,d,si;
    printf("enter the principle amount\n");
    scanf("%d",&p);
     printf("enter the rate of interest\n");
    scanf("%d",&r);
     printf("enter the time period\n");
    scanf("%d",&d);
    si=(p*r*d)/365;
    printf("the simple interest =%d",si);
    getch();
}
