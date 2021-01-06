#include<stdio.h>
#include<conio.h>
void main()
{
  float C,F;
  clrscr();
  printf("\n Enter Fahrenheit:-     ");
  scanf("%f",&F);
  printf("\n____________________________");
  printf("\n Fahrenheit    Centigrade");
  printf("\n____________________________");
  C=(F-32)*5/9;
  printf("\n %2f    %2f",F,C);
  getch();
}