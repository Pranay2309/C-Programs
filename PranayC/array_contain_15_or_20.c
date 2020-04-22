#include<stdio.h>
#include<conio.h>
void main()
{
    int a[2],i;
    printf("enter the array elements\n");
    for(i=0;i<=1;i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[0]==15 || a[0]==20 || a[1]==15 ||a[1]==20)
    {
        printf("array contains 15 or 20\n");
    }
    else
    {
        printf("array does not contain 15 or 20\n");
    }
    getch();
}
