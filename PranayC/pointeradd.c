#include <stdio.h>#
#include<conio.h>
void main()
{
    int a=2,b=4,*p1,*p2,sum;
    p1=&a;
    p2=&b;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    sum=*p1+*p2;
    printf("sum is =%d\n",sum);
    getch();
}
