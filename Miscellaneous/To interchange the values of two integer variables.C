#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  a=10;
  b=20;
  printf("\n Here value of a is %d",a);
  printf("\n Here value of b is %d",b);
  c=a;
  a=b;
  b=c;
  printf("\n\n\n Now value of a is %d",a);
  printf("\n Now value of b is %d",b);
  getch();
}