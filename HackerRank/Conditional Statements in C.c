#include <stdio.h>
#include <math.h>

int main()
{
  int n;
  scanf("%d",&n);
  if(n>=1 && n<=pow(10,9))
  {
    if(n==1)
    {
      printf("one");
    }
    else if(n==2)
    {
      printf("two");
    }
    else if(n==3)
    {
      printf("three");
    }
    else if(n==4)
    {
      printf("four");
    }
    else if(n==5)
    {
      printf("five");
    }
    else if(n==6)
    {
      printf("six");
    }
    else if(n==7)
    {
      printf("seven");
    }
    else if(n==8)
    {
      printf("eight");
    }
    else if(n==9)
    {
      printf("nine");
    }
    else
    {
      printf("Greater than 9");
    }
  }
  else
  {
    printf("Value of n is out of bounds.");
  }
  return 0;
}
