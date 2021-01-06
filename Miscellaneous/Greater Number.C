#include<stdio.h>
#include<conio.h>
void main()
{
  int n1=10,n2;
  clrscr();
  printf("Enter the value for n2:");
  scanf("%d",&n2);
  if(n1>n2)
  printf("%d is the greater number",n1);
  else
  printf("%d is the greater number",n2);
  getch();
}