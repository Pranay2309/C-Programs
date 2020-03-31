#include<stdio.h>
#include<conio.h>
void main()
{
    int mat[3][3],i,j,k,l;
    printf("enter the elements of the matrix");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("mat[%d][%d]=",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\n diagonal matrix is");


    printf("\n");
    for(k=0;k<=2;k++)
    {
        for(l=0;l<=2;l++)
        {
            if(k==l)
            {
                printf("%d",mat[i][j]);
            }
            else
            {
                printf(" _ ");
            }
        }
        printf("\n");
    }
    getch();
}
