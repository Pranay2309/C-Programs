#include<stdio.h>
#include<conio.h>
void main()
{
    int a[4],even=0,odd=0;
    printf("enter any  array elements");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<5;j++)
    {
        if(a[j]%2==0)
        {
            even=even+a[j];
        }
        else
        {
            odd=odd+a[j];
        }
    }
    printf("sum of all even is %d\n",even);
    printf("sum of all odd is %d\n",odd);
    getch();
}
