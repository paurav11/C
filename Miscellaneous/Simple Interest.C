#include<stdio.h>
#include<conio.h>
void main()
{
  float P,R,N,inter;
  clrscr();
  printf("\n Enter the Principle value:");
  scanf("%f",&P);
  printf("\n Enter Rate:");
  scanf("%f",&R);
  printf("\n Enter Year:");
  scanf("%f",&N);
  inter=(P*R*N)/100;
  printf("\n Simple Interest is %2f",inter);
  getch();
}