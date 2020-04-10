#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,i;
    printf("enter the smaller value first\n");
    scanf("%d",&num1);
     printf("enter the second value\n");
    scanf("%d",&num2);
    printf("required numbers are as follows\n");
    for(i=num1;i<=num2;i++)
    {
        if(i%7==2 || i%7==3)
        {
            printf("%d\n",i);
        }
    }
    getch();
}
