#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,diff;
    printf("enter any integer\n");
    scanf("%d",&num1);
    if(num1>51)
    {
        diff=(num1-51)*3;
        printf("difference=%d",diff);
    }
    else
    {
        diff=51-num1;
        printf("difference=%d",diff);
    }
    getch();
}
