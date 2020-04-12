#include<stdio.h>
#include<conio.h>
void main()
{
    int a[7],i,n;
    printf("enter the 1st elements of the array\n");
    scanf("%d",&n);
    for(i=0;i<=6;i++)
    {

        if(n>0)
        {
            a[i]=n;
            n=n*3;
        }
        else
        {
            a[i]=100;
        }
    }
    for(i=0;i<=6;i++)
    {
    printf("a[%d] = %d\n",i,a[i]);
    }
    getch();
}
