#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a,b,c,x1,x2;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&a);
    printf("enter the value of c\n");
    scanf("%d",&c);
    x1=(-b+sqrt((b*b)-4*a*c))/(2*a);
    x2=(-b-sqrt((b*b)-4*a*c))/(2*a);
    if(((b*b)-4*a*c)>=0)
    {
        printf("roots are possible\n");
        printf("x1=%d",x1);
        printf("x2=%d",x2);
    }
    else
    {
        printf("roots are not possible\n");
    }
    getch();
}
