#include<stdio.h>
#include<conio.h>
int main()
{
  int sale,target,com;
  clrscr();
  printf("Enter sale:");
  scanf("%d",&sale);
  printf("Enter target:");
  scanf("%d",&target);
  if(sale>target)
  {
    printf("%d is the amount more than targeted",sale-target);
    com=sale*0.05;
  }
  else
  {
    printf("%d is the shortfall",target-sale);
    com=sale*0.012;
  }
  printf("\n commission=%d",com);
  getch();
}