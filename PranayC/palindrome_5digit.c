#include<stdio.h>
#include<conio.h>
void main()
{
    int num,n1,n2,n3,n4,orgnum,rev;
    printf("enter any five digit number\n");
    scanf("%d",&num);
    orgnum=num;
    n1=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    n3=num%10;
    num=num/10;
    n4=num%10;
    num=num/10;
    rev=(n1*10000)+(n2*1000)+(n3+100)+(n4*10)+(num*1);
    if(rev==orgnum)
    {
        printf("the entered number is palindrome\n");
    }
    else
    {
        printf("the entered number is not palindrome\n");
    }
    getch();
}
