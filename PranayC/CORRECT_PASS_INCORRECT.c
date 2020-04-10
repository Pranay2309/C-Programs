#include<stdio.h>
#include<conio.h>
void main()
{
    int pass,a=10;
    while(a!=0)
    {
        printf("enter the password\n");
        scanf("%d",&pass);
        if(pass==1234)
        {
            printf("Correct password\n");
            a=0;
        }
        else
        {
            printf("Incorrect password\n");
        }
    }
    return 0;
    getch();
}
