#include<stdio.h>
#include<conio.h>
void main()
{
    int num,n1,n2,orgnum,res;
    printf("enter any 3 digit number\n");
    scanf("%d",&num);
    orgnum=num;
    n1=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    res=(n1*n1*n1+n2*n2*n2+num*num*num);
    if(res==orgnum)
    {
        printf("It is an armstrong number\n");
    }
    else
    {
        printf("It is not an armstrong number\n");
    }
    getch();
}
