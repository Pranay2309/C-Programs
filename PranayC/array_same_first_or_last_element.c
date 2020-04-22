#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],b[100],i,j,n1,n2;
    printf("enter the number of elements of first array\n");
    scanf("%d",&n1);
    printf("enter the elements of first array\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number of elements of second array\n");
    scanf("%d",&n2);
    printf("enter the elements of second array\n");
    for(j=0;j<n2;j++)
    {
        scanf("%d",&b[j]);
    }
    if(a[0]==b[0] || a[n1]==b[n2])
    {
        printf("either it has first element same or last element same\n");
    }
    getch();
}
