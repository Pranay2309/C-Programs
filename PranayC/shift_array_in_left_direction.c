#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],i,n;
    printf("enter the size of array elements\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array elements after rotating are\n");
    for(i=1;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("%d",a[0]);
    getch();
}
