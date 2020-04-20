#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,sum,diff;
    printf("enter the two numbers\n");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    diff=num1-num2;
    if(sum==5 || diff==5 || num1==5 ||num2==5)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }
    getch();
}
