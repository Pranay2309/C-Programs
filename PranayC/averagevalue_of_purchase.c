#include<stdio.h>
#include<conio.h>
void main()
{
    float w1,w2,a,b,avg;
    printf("enter the weights of items in kg:\n");
    scanf("%f %f",&w1,&w2);
    printf(" value per kg of item 1:\n");
    scanf("%f",&a);
    printf(" value per kg of item 2:\n");
    scanf("%f",&b);
    avg=((w1*a)+(w2*b))/2;
    printf("the average value of items is:%f\n",avg);
    getch();
}
