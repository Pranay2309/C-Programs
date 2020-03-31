#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i;
    printf("enter the array elements");
    for(i=1;i<=5;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("reverse of array elements is");
    for(i=5;i>=1;i--)
    {
        printf("%d\n",a[i]);
        }
    getch();
}
