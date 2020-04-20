#include<stdio.h>
#include<conio.h>
void main()
{
    int num,res;
    printf("enter any non negative number\n");
    scanf("%d",&num);
    res=num%10;
    if(res==2 || res==1 || res==8 || res==9)
    {
        printf("given number is within 2 of multiple of 10\n");
    }
    else
    {
        printf("given number is not within 2 of multiple of 10\n");
    }
    getch();
}
