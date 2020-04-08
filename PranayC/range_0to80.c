#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("enter any number\n");
    scanf("%d",&num);
    if(num>=0 && num<=20)
    {
        printf("Range is [0,20]\n");
    }
    else
    if(num>=21 && num<=40)
    {
        printf("Range is [21,40]\n");
    }
    else
    if(num>=41 && num<=60)
    {
        printf("Range is [41,60]\n");
    }
    else
    if(num>=61 && num<=80)
    {
        printf("Range is [61,80]\n");
    }
    else
    {
        printf("the number is not within the range\n");
    }
    getch();
}
