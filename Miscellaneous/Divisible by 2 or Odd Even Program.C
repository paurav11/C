#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  clrscr();
  printf("Enter any positive integer:");
  scanf("%d",&a);
  if(a%2==0)
  printf("%d is completely divisible by 2,then it is even number");
  else
  printf("%d is not completely divisible by 2,then it is odd number");
  getch();
}