#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,num3;
    printf("enter three numbers for checking the possibility\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1+num2==num3 || num2+num3==num1 || num1+num3==num2)
    {
        printf("It is possible\n");
    }
    else
    {
        printf("It is not possible\n");
    }
}
