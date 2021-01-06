#include<stdio.h>
#include<conio.h>
void main()
{
  char c1;
  clrscr();
  printf("Enter a character:");
  scanf("%c",&c1);
  if(c1==' ')
  printf("There is a space");
  else
  printf("There is no space");
  getch();
}