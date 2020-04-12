#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    float sum=0;
    for(i=1;i<=50;i++)
    {
        sum=sum+(float)1/i;
    }
    printf("sum is=%.2f",sum);
    getch();
}
