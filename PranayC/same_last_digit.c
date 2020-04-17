#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2;
    printf("enter any two non-negative integers\n");
    scanf("%d %d",&num1,&num2);
    if((num1%10)==(num2%10))
    {
        printf("both the digits have same last digit\n");
    }
    else
    {
        printf("both the digits don't have same last digit\n");
    }
    getch();
}
