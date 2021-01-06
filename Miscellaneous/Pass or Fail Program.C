#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  clrscr();
  printf("Enter marks of a Subject:");
  scanf("%d",&a);
  if(a<35)
  printf("%d is less than 35,so fail",a);
  else
  printf("%d is more than 35,so pass",a);
  getch();
}