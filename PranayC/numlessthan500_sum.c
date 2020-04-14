#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num,n1,n2,res;
    printf("enter any number between 0 and 500\n");
    scanf("%d",&num1);
    num=num1;
    if(num<=0 || num>=500)
    {
        printf("the number is not in the limit\n");
    }
    else
    {
        n1=num%10;
        num=num/10;
        n2=num%10;
        num=num/10;
        res=n1+n2+num;
        printf("res=%d",res);
    }
    getch();
}
