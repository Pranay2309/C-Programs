#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,z;
    printf("enter the value of x,y and z\n");
    scanf("%d %d %d",&x,&y,&z);
    if(abs(y-x)==20 || abs(z-x)==20 || abs(x-z)==20)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }
    getch();
}
