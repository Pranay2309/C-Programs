#include<stdio.h>
#include<conio.h>
void main()
{
    int num,h,m,s;
    printf("enter any number\n");
    scanf("%d",&num);
    h=num/60;
    m=h/60;
    s=m/60;
    printf("hours=%d\n",h);
    printf("minutes=%d\n",m);
    printf("seconds=%d\n",s);
    getch();
}
