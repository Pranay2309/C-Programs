#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2;
    printf("enter any two positive numbers\n");
    scanf("%d %d",&num1,&num2);
    if((num1>=20 && num1<=30) && (num2>=20 && num2<=30))
    {
        if(num1>num2)
        {
             printf("num1 is greater\n");
        }
       else
       {
           printf("num2 is greater\n");
       }
    }
    else
    {
        printf("the numbers are not in the range\n");

        return 0;
    }
    getch();
}
