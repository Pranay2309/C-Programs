#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("enter three integer values to compare\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("the greatest value is a=%d\n",a);
    }
    if(b>a && b>c)
    {
        printf("the greatest value is b=%d\n",b);
    }
    if(c>a && c>b)
    {
        printf("the greatest value is c=%d\n",c);
    }
    getch();
}
