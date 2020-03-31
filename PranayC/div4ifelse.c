#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem;
    printf("enter any number");
    scanf("%d",&num);
    rem=num%4;
    if(rem==0)
    {
        printf("the number is divisible by 4");
    }
    else
    {
        printf("the number is not divisible by 4");
    }
    getch();
}
