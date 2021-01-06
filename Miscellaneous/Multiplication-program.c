#include<stdio.h>
#include<conio.h>
void main()
{
  int n1,n2,ans;
  clrscr();
  printf("Enter any two positive integer numbers:");
  scanf("%d %d",&n1,&n2);
  ans=n1*n2;
  printf("%d is the product of two numbers",ans);
  getch();
}
