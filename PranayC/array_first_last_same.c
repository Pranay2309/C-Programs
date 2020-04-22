#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],i,n;
    printf("enter the size of array elements\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[0]==a[n])
        {
            printf("TRUE\n");
        }
    else
        {
            printf("FALSE\n");
        }
    getch();
}
