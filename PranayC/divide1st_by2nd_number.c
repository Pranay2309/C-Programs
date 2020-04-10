#include<stdio.h>
#include<conio.h>
void main()
{
    float num1,num2,res;
    printf("enter the two numbers\n");
    scanf("%f %f",&num1,&num2);
    if(num2!=0)
    {
        printf("the division is possible\n");
        res=num1/num2;
        printf("the result is%.2f",res);
    }
    else
    {
        printf("the division is not possible\n");
    }
    getch();
}
