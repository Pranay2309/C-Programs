#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,i;
    a=0;
    b=1;
    printf("%d\t",a);
    printf("%d\t",b);
    for(i=0;i<=10;i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
    getch();
}
