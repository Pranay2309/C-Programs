#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,dist;
    printf("enter distance of point a from reference point\n");
    scanf("%d",&a);
    printf("enter distance of point b from reference point\n");
    scanf("%d",&b);
    if(a>b)
    {
        dist=a-b;
        printf("distance between two points is=%d\n",dist);
    }
    else
    {
        dist=b-a;
        printf("distance between two points is=%d\n",dist);
    }
getch();
}
