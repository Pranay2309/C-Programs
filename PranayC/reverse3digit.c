#include<stdio.h>
#include<conio.h>
void main()
{
    int num,n1,n2,n3,rev;
    printf("enter any 3 number for reversing\n");
    scanf("%d",&num);
    n1=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    n3=num%10;
    rev=(n1*100+n2*10+n3*1);
    printf("the result is %d\n",rev);
    getch();
}
