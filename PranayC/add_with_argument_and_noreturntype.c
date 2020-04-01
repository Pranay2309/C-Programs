#include<stdio.h>
#include<conio.h>
void add(int num1,int num2);
void main()
{
    int num1,num2;
    printf("enter two numbers");
    scanf("%d %d",&num1,&num2);
    add(num1,num2);
}
void add(int num1,int num2)
{
    int res;
    res=num1+num2;
    printf("sum is%d",res);
    getch();
}
