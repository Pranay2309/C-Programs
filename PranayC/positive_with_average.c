#include<stdio.h>
#include<conio.h>
void main()
{
    int num[5],i,avg,positive=0,sum=0;
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
    for(i=0;i<5;i++)
    {
        if(num[i]>0)
        {
            positive++;
            sum=(sum+num[i]);
        }
    }
    avg=sum/positive;
    printf("\nnumber of positive number=%d",positive);
    printf("\n");
    printf("average of positive number=%d\n",sum);
    getch();
}
