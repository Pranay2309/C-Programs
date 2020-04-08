#include<stdio.h>
#include<conio.h>
struct employer
{
    int id;
    float hours,amount;
}s1;
void main()
{
    float salary;
    printf("enter id of employer\n");
    scanf("%d",&s1.id);
    printf("enter number of hours worked by employer monthly\n");
    scanf("%f",&s1.hours);
    printf("enter amount given per hour\n");
    scanf("%f",&s1.amount);
    salary=s1.hours*s1.amount;
    printf("ID:%d\n",s1.id);
    printf("monthly salary of employer is=%f",salary);
    getch();
}
