#include<stdio.h>
#include<conio.h>
void main()
{
    int num[5],i,positive=0,negative=0;
    printf("enter the first number\n");
    scanf("%d",&num[0]);
    printf("enter the second number\n");
    scanf("%d",&num[1]);
    printf("enter the third number\n");
    scanf("%d",&num[2]);
    printf("enter the fourth number\n");
    scanf("%d",&num[3]);
    printf("enter the fifth number\n");
    scanf("%d",&num[4]);
    for(i=0;i<=5;i++)
    {
        if(num[i]>0)
        {
            positive++;
        }
        else
            if(num[i]<0)
        {
            negative++;
        }
    }
    printf("number of positive numbers are %d\n",positive);
    printf("number of negative numbers are %d\n",negative);
    getch();
}
