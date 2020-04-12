#include<stdio.h>
#include<conio.h>
void main()
{
    int a[7],i,n;
    printf("enter the 7 elements of the array\n");
    for(i=0;i<=6;i++)
    {
        scanf("%d",&n);
        if(n>0)
        {
            a[i]=n;
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
