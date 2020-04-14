#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2;
    printf("enter two numbers for swapping\n");
    scanf("%d %d",&num1,&num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("the numbers after swapping are:\n%d\n%d",num1,num2);
    getch();
}
