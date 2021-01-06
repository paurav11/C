#include<stdio.h>
#include<conio.h>
int main()
{
  int salary,deduction,HRA,Netsal;
  clrscr();
  printf("Enter salary:");
  scanf("%d",&salary);
  if(salary>20000)
  {
    printf("%d is the amount of salary which is greater than 20000");
    HRA=salary*0.18;
    deduction=salary*0.13;
  }
  else
  {
    printf("%d is the amount of salary which is less than 20000");
    HRA=salary*0.09;
    deduction=salary*0.06;
  }
  Netsal=salary+HRA-deduction;
  printf("\n Netsalary=%d",Netsal);
  getch();
  return 1;
}