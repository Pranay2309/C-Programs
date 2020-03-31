#include<stdio.h>
#include<conio.h>
void main()
{
  int a[5]={1,12,23,56,57},i;
  int *p1;
  p1=&a[0];
  for(i=1;i<=5;i++)
  {
      printf("%d\n",*p1);
      p1++;
  }
  getch();
}
