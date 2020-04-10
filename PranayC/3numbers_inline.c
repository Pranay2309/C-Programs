#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,j=1,x=0;
    printf("enter the number of lines\n");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        while(x<3)
        {
            printf(" %d",j++);
            x++;
        }
        x=0;
        printf("\n");
    }
}
