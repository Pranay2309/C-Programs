#include<stdio.h>
#include<conio.h>
void swap(int x,int y)
{
    printf("x=%d\n",x);
    printf("y=%d\n",y);
}
void main()
{
    int a=50,b=100;
    swap(a,b);
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}
