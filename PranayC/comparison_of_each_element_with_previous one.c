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
    printf("\n%d\n",a[0]);
    for(i=0;i<n;i++)
    {
         if(i!=0)
             {
                 if(a[i]==a[i-1])
                      {
                        printf("%d\n",a[i]);
                        printf("\nthis element is equal to the previous one\n");
                      }
                 if(a[i]>a[i-1])
                      {
                        printf("%d\n",a[i]);
                        printf("\nthis element is greater than the previous one\n");
                      }
                 if(a[i]<a[i-1])
                      {
                        printf("%d\n",a[i]);
                        printf("this element is smaller than the previous one\n");
                      }
             }
    }
    getch();
}
