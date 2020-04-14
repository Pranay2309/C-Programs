#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y;
    printf("enter any integer value\n");
    scanf("%d",&x);
    x<<=3;
    y=x;
    printf("value after shifting by two bits is=%d",y);
    getch();
}
