#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("enter any non negative number\n");
    scanf("%d",&num);
    if(num%13==0)
    {
        printf("it is multiple of 13\n");
    }
    else
    if(num%13==1)
    {
        printf("it is one more than multiple of 13\n");
    }
    else
    {
        printf("it is neither multiple of 13 nor more than it's multiple\n");
    }
    getch();
}
