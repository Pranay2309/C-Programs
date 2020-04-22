#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i;
    printf("enter the array elements\n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array elements after reversing are\n");
    for(i=4;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
    getch();
}
