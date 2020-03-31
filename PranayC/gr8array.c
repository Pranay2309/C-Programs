#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5],num=0;
 printf("enter five array elements");
 for(int i=0;i<5;i++)
 {
     scanf("%d", &a[i]);
 }
 for(int j=0;j<5;j++)
 {
     if(num>=a[j])
     {
         num=a[j];
     }
 }
 printf("the greatest element is %d\n",num);
 getch();
}
