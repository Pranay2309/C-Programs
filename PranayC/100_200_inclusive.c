#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2;
    printf("enter two integers\n");
    scanf("%d %d",&num1,&num2);
    if((num1>=100 && num1<=200) || (num2>=100 && num2<=200) )
    {
        printf("yes either of the number is in the given limits\n");
    }
    else
    {
        printf("neither of the number is in the given limits\n");
    }
    getch();
}
