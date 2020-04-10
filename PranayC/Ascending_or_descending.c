#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("enter the first number of the pair\n");
    scanf("%d",&a);
    printf("enter the second number of the pair\n");
    scanf("%d",&b);
    if(a>b)
    {
        printf("It is descending pair\n");
    }
    else
    {
        printf("It is ascending pair\n");
    }
    getch();
}
