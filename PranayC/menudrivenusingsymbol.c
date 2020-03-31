#include<stdio.h>
#include<conio.h>
void main()
{
    int ch,num1,num2,res;
    printf("press + for addition\n");
    printf("press - for subtraction\n");
    printf("press * for multiplication\n");
    printf("press / for division\n");
    printf("enter your choice\n");
    scanf("%c",&ch);
    if(ch=='+')
    {
        printf("enter two numbers for addition\n");
        scanf("%d %d",&num1,&num2);
        res=num1+num2;
        printf("the addition is %d\n",res);
    }
    if(ch=='-')
    {
        printf("enter two numbers for subtraction\n");
        scanf("%d %d",&num1,&num2);
        res=num1-num2;
        printf("the subtraction is %d\n",res);
    }
    if(ch=='*')
    {
        printf("enter two numbers for multiplication\n");
        scanf("%d %d",&num1,&num2);
        res=num1*num2;
        printf("the multiplication is %d\n",res);
    }
    if(ch=='/')
    {
        printf("enter two numbers for division\n");
        scanf("%d %d",&num1,&num2);
        res=num1/num2;
        printf("the division is %d\n",res);
    }
    if(ch==5)
    {
        printf("It is an invalid choice");
    }
    getch();
}
