#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,z;
    printf("enter the value of x,y and z\n");
    scanf("%d %d %d",&x,&y,&z);
    if(y>x)
    {
        printf("y is greater than x\n");
    }
    else
        if(z>y)
    {
        printf("z is greater than y\n");
    }
    getch();
}
