#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i;
    printf("the number of lines\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        printf("%d %d %d\n",i,i*i,i*i*i);
    }
    getch();
}

