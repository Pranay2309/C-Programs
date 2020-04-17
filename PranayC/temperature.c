#include<stdio.h>
#include<conio.h>
void main()
{
    int t1,t2;
    printf("enter two values of temperature in degree celcius\n");
    scanf("%d %d",&t1,&t2);
    if((t1<0 && t2>100) || (t2<0 && t1>100))
    {
        printf("yes one temperature is less than 0 and other greater than 100\n");
    }
    getch();
}
