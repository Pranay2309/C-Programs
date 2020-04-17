#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,num3;
    printf("enter any three integers\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    if((num1>=20 && num1<=50) || (num2>=20 && num2<=50) || (num3>=20 && num3<=50) )
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }
    getch();
}
