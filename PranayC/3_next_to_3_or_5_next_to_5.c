#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if((a[i]==3 && a[i-1]==3) && (a[i]==5 && a[i-1]==5))
    {
        printf("\nArray contains both 3next to a 3 and 5 next to 5\n");
    }
    else
    if(a[i]==3 && a[i-1]==3)
        {
            printf("\nArray contains 3 next to a 3\n");
        }
    else
        if(a[i]==5 && a[i-1]==5)
    {
        printf("\nArray contains 5 next to a 5\n");
    }
    }
getch();
}
