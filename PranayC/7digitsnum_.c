#include<stdio.h>
#include<conio.h>
void main()
{
    int num,n1,n2,n3,n4,n5,n6;
    printf("enter any 7 digit number\n");
    scanf("%d",&num);
    n1=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    n3=num%10;
    num=num/10;
    n4=num%10;
    num=num/10;
    n5=num%10;
    num=num/10;
    n6=num%10;
    num=num/10;
    printf("%d  ",num);
    printf("%d  ",n6);
    printf("%d  ",n5);
    printf("%d  ",n4);
    printf("%d  ",n3);
    printf("%d  ",n2);
    printf("%d  ",n1);
    getch();
}
