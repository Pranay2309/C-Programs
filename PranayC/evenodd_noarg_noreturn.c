#include<stdio.h>
#include<conio.h>
void even();
void main()
{
   even();
}
void even()
{
    int num;
    printf("enter any number\n");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }
    getch();
}
