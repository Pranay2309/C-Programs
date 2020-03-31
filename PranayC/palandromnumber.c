#include<stdio.h>
#include<conio.h>
void main()
{
    int num,n1,n2,rev,orgnum;
    printf("enter any 3 digit number\n");
    scanf("%d",&num);
    orgnum=num;
    n1=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    rev=(n1*100+n2*10+num*1);
    if(rev==orgnum)
    {
        printf("The number is palandrom\n");
    }
    else
    {
        printf("The number is not palandrom\n");
    }
    getch();
}
