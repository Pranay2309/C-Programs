#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("enter any non negative number\n");
    scanf("%d",&num);
    if(num%3==0 && num%7==0)
    {
        printf("it is both multiple of 3 and 7\n");
    }
    else
        if(num%7==0)
    {
        printf("it is the multiple of 7\n");
    }
    else
        if(num%3==0)
    {
        printf("it is the multiple of 3\n");
    }
    else
    {
        printf("neither multiple of 3 nor 7\n");
    }
    getch();
}
