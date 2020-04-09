#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    printf("enter the specified number upto which the square are to be printed\n");
    scanf("%d",&n);
    printf("the square of even numbers are\n");
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i*i);
        }
    }
    getch();
}
