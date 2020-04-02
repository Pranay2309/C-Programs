#include<stdio.h>
void show(int *x,int *y)
{
 *x=34;
 *y=48;
}
void main()
{
    int a=5,b=10;
    printf("before a=%d b=%d\n",a,b);
    show(&a,&b);
    printf("after a=%d b=%d\n",a,b);
    getch();
}
