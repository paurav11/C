#include<stdio.h>
#include<conio.h>
#define PI 3.14
#define r Radius
void main()
{
  float circumference,r;
  clrscr();
  printf("Enter the value of r:");
  scanf("%f",&r);
  circumference=2*PI*r;
  printf("\n Circumference of circle with radius %.2f is %.2f",r,circumference);
  getch();
}