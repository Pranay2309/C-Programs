#include<stdio.h>
#include<conio.h>
void main()
{
    int num,n1,n2,n3,n4,n5,res;
    printf("enter any 5 digit number\n");
    scanf("%d",&num);
    n1=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;0011111
    n3=num%10;
    num=num/10;
    n4=num%10;
    num=num/10;
    res=n1+n2+n3+n4+num;
    printf("the sum of digits is%d",res);
    getch();
}
