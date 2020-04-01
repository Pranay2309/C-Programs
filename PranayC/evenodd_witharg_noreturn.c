#include<stdio.h>
#include<conio.h>
void even(int num);
void main()
{
    int num;
    printf("print any number\n");
    scanf("%d",&num);
    even(num);
}
void even(int num)
{
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
