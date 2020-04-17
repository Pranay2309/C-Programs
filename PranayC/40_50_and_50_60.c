#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2;
    printf("enter any two integers\n");
    scanf("%d %d",&num1,&num2);
    if((num1>=40 && num1<=50) && (num2>=40 && num2<=50))
    {
        printf("it is the range of 40-50\n");
    }
    else
        if((num1>=50 && num1<=60) && (num2>=50 && num2<=60))
    {
        printf("it is in the range of 50-60\n");
    }
    else
    {
        printf("not in any of the specified range\n");
    }
    getch();
}
