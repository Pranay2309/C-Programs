#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2;
    printf("enter the first integer\n");
    scanf("%d",&num1);
    printf("enter the second integer\n");
    scanf("%d",&num2);
    if(num2%num1==0)
    {
        printf("first integer is multiple of second\n");
    }
    else
    {
        printf("first integer is not a multiple of second\n");
    }
    getch();
}
