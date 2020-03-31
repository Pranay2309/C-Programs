#include<stdio.h>
#include<conio.h>
void main()
{
    int ch,num1,num2,res;
    printf("press 1 for addition\n");
    printf("press 2 for subtraction\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for division\n");
    printf("enter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("enter two numbers for addition\n");
        scanf("%d %d",&num1,&num2);
        res=num1+num2;
        printf("the addition is %d\n",res);
        break;

        case 2:
        printf("enter two numbers for subtraction\n");
        scanf("%d %d",&num1,&num2);
        res=num1-num2;
        printf("the subtraction is %d\n",res);
        break;

        case 3:
        printf("enter two numbers for multiplication\n");
        scanf("%d %d",&num1,&num2);
        res=num1*num2;
        printf("the multiplication is %d\n",res);
        break;

        case 4:
        printf("enter two numbers for division\n");
        scanf("%d %d",&num1,&num2);
        res=num1/num2;
        printf("the division is %d\n",res);
        break;

        case 5:
        printf("It is an invalid choice");
        break;
    }
    getch();
}
