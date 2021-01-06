#include<stdio.h>
#include<conio.h>
void main()
{
  int sal;
  clrscr();
  printf("Enter the salary:");
  scanf("%d",&sal);
  if(sal>5000 && sal<20000)
    printf("OK");
  else
    printf("NOT OK");
  getch();
}