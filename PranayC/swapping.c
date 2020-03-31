#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,swap;
    printf("enter any two numbers for swapping\n");
    scanf("%d %d",&num1,&num2);
    swap=num2;
    num2=num1;
    num1=swap;
    printf("numbers after swapping are\n");
    printf("num1=%d\n num2=%d\n",num1,num2);
    getch();
}
