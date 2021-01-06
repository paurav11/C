#include<stdio.h>
#include<conio.h>
void main()
{
  char c1;
  clrscr();
  printf("Enter any character from keyboard:");
  scanf("%c",&c1);
  if(c1>='A' && c1<='Z')
  printf("Capital Alphabet");
  else
  printf("Not a Capital Alphabet");
  getch();
}