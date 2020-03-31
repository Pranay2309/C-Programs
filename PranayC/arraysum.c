#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i,sum=0;
    printf("enter any five elements");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("the sum is %d",sum);
    getch();
}
