#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,sum;
    printf("enter any two numbers\n");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    if(num1==30 || num2==30 || sum==30)
    {
        printf("TRUE");
    }
    else
    {
        printf("INVALID INPUT\n");
    }
    getch();
}
