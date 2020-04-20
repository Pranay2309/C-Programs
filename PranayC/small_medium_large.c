#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,num3;
    printf("enter any three numbers\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3)
    {
        printf("greatest=%d\n",num1);
        if(num2>num3)
        {
            printf("medium=%d\n",num2);
            printf("small=%d\n",num3);
        }
        if(num1-num2==num2-num3)
        {
            printf("\nTRUE\n");
        }
    }
    else
    if(num2>num1 && num2>num3)
    {
        printf("greatest=%d\n",num2);
        if(num1>num3)
        {
            printf("medium=%d\n",num1);
            printf("small=%d\n",num3);
        }
        if(num2-num2==num2-num3)
        {
            printf("\nTRUE\n");
        }
    }
    else
        if(num3>num2 && num3>num1)
    {
        printf("greatest=%d\n",num3);
        if(num2>num1)
        {
            printf("medium=%d\n",num2);
            printf("small=%d\n",num1);
        }
        if(num3-num2==num2-num1)
        {
            printf("\nTRUE\n");
        }
    }
    else
    getch();
}
