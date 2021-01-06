#include<stdio.h>
#include<conio.h>
int main()
{
  int n1,n2,i,j,flag;
  clrscr();
  printf("Enter two numbers(intevals): ");
  scanf("%d %d",&n1,&n2);
  printf("Prime numbers between %d and %d are:",n1,n2);
  for(i=n1+1;i<n2;++i)
  {
      flag=0;
      for(j=2;j<=i/2;++j)
      {
        if(i%j==0)
        {
          flag=1;
          break;
        }
      }
      if(flag==0)
        printf("%d",i);
  }
  return 0;
}