#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],tran[3][3],i,j,k,l,m,n;
    printf("enter the elements of matrix");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(k=0;k<=2;k++)
    {
        for(l=0;l<=2;l++)
        {
           tran[k][l]=a[l][k];
        }
    }
    printf("transpose of the matrix is");
    printf("\n");
    for(m=0;m<=2;m++)
    {
        for(n=0;n<=2;n++)
        {
            printf("tran[%d][%d]= %d",m,n,tran[m][n]);
            printf("\n");
        }
        printf("\n");
    }
    getch();

}
