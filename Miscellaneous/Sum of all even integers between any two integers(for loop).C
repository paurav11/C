#include<stdio.h>
#include<conio.h>
void main()
{
  int n1,n2;
  int sum=0;
  int i;
  clrscr();
  printf("\n Enter any two integer numbers:");
  scanf("%d %d",&n1,&n2);
  if(n2<n1)
  {
     i=n1;
     n1=n2;
     n2=i;
  }
  for(i=n1;i<=n2;i++)
   if(i%2==0)
    sum+=i;
  printf("\n Sum of even numbers between %d & %d is %d",n1,n2,sum);
  getch();
}