#include<stdio.h>
#include<conio.h>
void main()
{
  float num1=2;
  float num2=6;
  float ans,ans1;
  clrscr();
  ans=num1*num2;
  ans1=num2/num1;
  printf("\n Multiplication of %2f & %2f is %2f",num1,num2,ans);
  printf("\n Division of %f & %f is %f",num2,num1,ans1);
  getch();
}