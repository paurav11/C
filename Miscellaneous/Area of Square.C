#include<stdio.h>
#include<conio.h>
void main()
{
  float length,area;
  clrscr();
  printf("\n Enter the value of length:");
  scanf("%f",&length);
  area=length*length;
  printf("\n Area of Square is %2f",area);
  getch();
}