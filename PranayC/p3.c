#include<stdio.h>
#include<conio.h>
void main()
{
    int count;
    count=1;
    while(count<=10)
    {
        if(count%2!=0)
        {
            printf("%d",count);
        }
        count++;
    }
    getch();
}
