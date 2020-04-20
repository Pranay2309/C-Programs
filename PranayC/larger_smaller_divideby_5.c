#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,small;
    printf("enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    {
        printf("first number is greater than the second number\n");
        small=num2;
        if(num1%5==num2%5)
           {
               printf("%d",small);
           }
    }
    else
        if(num1<num2)
    {
        printf("second number is greater than the first number\n");
        small=num1;
        if(num1%5==num2%5)
           {
               printf("%d",small);
           }
    }
    else
        if(num1==num2)
    {
        return 0;
    }
    getch();
}
