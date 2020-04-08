#include<stdio.h>
#include<conio.h>
void main()
{
    int p,q,r,s,sum1,sum2;
    printf("enter any even value of p\n");
    scanf("%d",&p);
    printf("enter the value of q\n");
    scanf("%d",&q);
    printf("enter the positive value of r\n");
    scanf("%d",&r);
    printf("enter the positive value of s\n");
    scanf("%d",&s);
    sum1=r+s;
    sum2=p+q;
    if(q>r && s>p && sum1>sum2)
    {
        printf("values are correct\n");
    }
    else
    {
        printf("values of wrong\n");
    }
    getch();
}
