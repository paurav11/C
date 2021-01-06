#include<stdio.h>
#include<ctype.h>
#include<conio.h>
int main()
{
  char c1;
  clrscr();
  printf("Enter any Character:");
  scanf("%c",&c1);
  if(isupper(c1))
    printf("Uppercase");
  else
    printf("Not an Uppercase");
  getch();
  return (1);
}