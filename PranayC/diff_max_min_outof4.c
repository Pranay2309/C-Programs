#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,max,min,diff;
    printf("enter four numbers\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>=b && a>=c && a>=d)
    {
        printf("max value=%d\n",a);
        max=a;
    }
    if(b>=a && b>=c && b>=d)
    {
        printf("max value=%d\n",b);
        max=b;
    }
    if(c>=a && c>=b && c>=d)
    {
        printf("max value=%d\n",c);
        max=c;
    }
    else
    {
        printf("max value=%d\n",d);
        max=d;
    }
    if(a<=b && a<=c && a<=d)
    {
        printf("min value=%d\n",a);
        min=a;
    }
    if(b<=a && b<=c && b<=d)
    {
        printf("min value=%d\n",b);
        min=b;
    }
    if(c<=a && c<=b && c<=d)
    {
        printf("min value=%d\n",c);
        min=c;
    }
    if(d<=a && d<=b && d<=a)
    {
        printf("min value=%d\n",d);
        min=d;
    }
    diff=max-min;
    printf("result=%d",diff);
    getch();
}
