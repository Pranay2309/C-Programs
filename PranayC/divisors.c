#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i;
    printf("enter any number\n");
    scanf("%d",&num);
    printf("all the divisors of the given integer are\n");
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d\n",i);
        }
    }
    getch();
}
