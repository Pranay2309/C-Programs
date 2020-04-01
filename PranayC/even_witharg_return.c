#include<stdio.h>
#include<conio.h>
int even(int num);
void main()
{
    int num;
    printf("print any number\n");
    scanf("%d",&num);
    even(num);
}
int even(int num)
{
    int even;
    if(num%2==0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }
    return even;
    getch();
}
