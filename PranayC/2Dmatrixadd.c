#include<stdio.h>
#include<conio.h>
void main()
{
    int r,c,a[100][100],b[100][100],i,j,sum[100][100];
    printf("enter number of rows of matrix:");
    scanf("%d",&r);
    printf("enter number of column of matrix:");
    scanf("%d",&c);
    printf("enter the elements of first matrix\n:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter elements %d %d:",i,j);
            scanf("%d",&a[i][j]);
        }

    }
    printf("enter the elements of second matrix\n:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter elements %d %d:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<=r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("the sum of two matrix is\n\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",sum[i][j]);
        }
    }
    getch();

}
