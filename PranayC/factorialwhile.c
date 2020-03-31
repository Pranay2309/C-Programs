#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i=1;
    printf("enter any number");
    scanf("%d",&num);
    while(num>0)
    {
        i=i*num;
        num--;
    }
    printf("the factorial is %d",i);
    getch();
}
