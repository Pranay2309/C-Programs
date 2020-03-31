#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],i,j,sum=0;
    printf("enter the elements of matrix");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d",a[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<=2;i++)
    {
    sum=sum+a[i][i];
    }
    printf("sum of diagonal element is %d",sum);
    getch();
}

