#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],temp;
    printf("enter any five elements\n");
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<=4;j++)
    {
        for(int k=j+1;k<=4;k++)
    {
        if(a[j]>a[k])
        {
            temp=a[j];
            a[j]=a[k];
            a[k]=temp;
        }

    }
    }
    printf("after selection sort\n");
    for(int b=0;b<=4;b++)
    {
    printf("%d\n",a[b]);
    }
    getch();
}
