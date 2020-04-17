#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("enter any positive number\n");
    scanf("%d",&num);
    if(num%3==0)
    {
        printf("it is a multiple of 3\n");
    }
    if(num%7==0)
    {
        printf("it is a multiple of 7");
    }
    getch();
}
