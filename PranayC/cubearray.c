#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],cube=1;
    printf("enter any 5 array elements");
    for(int x=0;x<=4;x++)
    {
        scanf("%d",&a[x]);
    }
    for(int i=0;i<=4;i++)
    {
        cube=(a[i]*a[i]*a[i]);
        printf("cube is %d is %d\n",a[i],cube);
        cube=1;
    }
    getch();
}
