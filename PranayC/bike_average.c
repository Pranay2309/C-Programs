#include<stdio.h>
#include<conio.h>
void main()
{
    int d;
    float f,avg;
    printf("enter total distance travelled by the bike in km\n");
    scanf("%d",&d);
    printf("enter total fuel consumed in litres\n");
    scanf("%f",&f);
    avg=d/f;
    printf("average of bike is%f\n",avg);
    getch();
}
