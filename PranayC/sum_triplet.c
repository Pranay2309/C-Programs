#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,sum;
    printf("enter the value of two integer\n");
    scanf("%d %d",&num1,&num2);
    if(num1==num2)
    {
        printf("the two entered numbers are same\n");
        sum=(num1+num2)*3;
        printf("triplet of their sum=%d",sum);

    }
    else
    {
        printf("the two entered numbers are not same\n");
        sum=num1+num2;
        printf("sum=%d",sum);
    }
    getch();
}
