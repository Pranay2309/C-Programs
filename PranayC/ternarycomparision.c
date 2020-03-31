#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("enter two values for comparision\n");
    scanf("%d %d",&a,&b);
    c=(a>b) ? a : b;
    printf("the greater value is %d",c);
    getch();
}
