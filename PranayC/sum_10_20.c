#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,sum;
    printf("enter the two numbers for addition\n");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    if(sum>=10 && sum<=20)
    {
        sum=30;
        printf("sum=%d",sum);
    }
    else
    {
        printf("sum=%d",sum);
    }
    getch();
}
