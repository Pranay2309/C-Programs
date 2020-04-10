#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,i,sum=0;
    printf("enter the smaller value first\n");
    scanf("%d",&num1);
     printf("enter the second value\n");
    scanf("%d",&num2);
    for(i=num1;i<=num2;i++)
    {
        if(i%17!=0)
        {
            sum=sum+i;
        }
    }
    printf("the sum=%d\n",sum);
    getch();
}
