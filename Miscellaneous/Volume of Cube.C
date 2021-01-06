#include<stdio.h>
#include<conio.h>
void main()
{
  float length,volume;
  clrscr();
  printf("Enter the value of length:");
  scanf("%f",&length);
  volume=length*length*length;
  printf("Volume of cube is %2f",volume);
  getch();
}