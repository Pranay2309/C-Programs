#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2;
    printf("enter the first number\n");
    scanf("%d",&num1);
    printf("enter the second number\n");
    scanf("%d",&num2);
    if(num1%num2==0 || num2%num1==0)
    {
        printf("they are multiple of each other\n");
    }
    else
    {
        printf("they are not multiple of each other\n");
    }
    getch();
}
