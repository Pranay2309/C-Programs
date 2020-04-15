#include<stdio.h>
#include<conio.h>
void main()
{
    int x;
    printf("(x)\t(x+2)\t(x+4)\t(x+6)\n");
    printf("_____________________________\n");
    for(x=1;x<=13;x+=3)
    {
        printf("%d\t%d\t%d\t%d\n",(x),(x+2),(x+4),(x+6));
    }
    getch();
}
