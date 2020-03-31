#include<stdio.h>
#include<conio.h>
void main()
{
    int T;
    printf("enter time in hours format\n");
    scanf("%d",&T);
    if(T>=5 && T<12)
    {
        printf("GOOD MORNING");
    }
    if(T>12 && T<16)
    {
        printf("GOOD AFTERNOON");
    }
    if(T>16 && T<21)
    {
        printf("GOOD EVENING");
    }
    else
    {
        printf("GOOD NIGHT");
    }
    getch();
}
