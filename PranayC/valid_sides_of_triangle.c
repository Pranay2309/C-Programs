#include<stdio.h>
#include<conio.h>
void main()
{

    int a,b,c,p;
    printf("enter the three sides of traingle\n");
    scanf("%f %f %f",&a,&b,&c);
    if(a<b+c || b<a+c || c<a+b)
    {
        printf("the sides of triangle are valid\n");
        p=a+b+c;
        printf("the perimeter of triangle is=%f\n",p);
    }
    else
    {
        printf("the sides of triangle are not valid\n");
    }
    getch();
}
