#include<stdio.h>
#include<conio.h>
void main()
{
  int n1,n2,n3;
  float avg;
  clrscr();
  printf("\n Enter First value:");
  scanf("%d",&n1);
  printf("\n Enter Second value:");
  scanf("%d",&n2);
  printf("\n Enter Third value:");
  scanf("%d",&n3);
  avg=(n1+n2+n3)/3;
  printf("\n Average is:- %2f",avg);
  getch();
}