#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n,i,sum=0;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==5)
        {
            sum=sum+a[i];
        }
    }
    printf("sum of 5s in this array=%d",sum);
    if(sum==15)
            {
                printf("\n yes sum of 5s in this array is 15\n");
            }
    else
            {
                printf("\n sum of 5s in this array is not 15\n");
            }
    getch();
}
