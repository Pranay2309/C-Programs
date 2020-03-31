#include<stdio.h>
#include<conio.h>
void main()
{
    int f,l,torque;
    printf("Enter force and length\n");
    scanf("%d %d",&f,&l);
    torque=f*l;
    printf("torque is %d",torque);
    getch();
}
