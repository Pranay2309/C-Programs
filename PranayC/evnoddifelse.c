#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem;
    printf("enter any number");
    scanf("%d",&num );
    rem=num%2;
    if(rem==0)
    {
        printf("the number is even");
    }
    else
    {
        printf("the number is odd");
    }
    getch();
}
