#include <stdio.h>
#include <conio.h>
int sum=0;
int natural(int x,int y)
{
   if(x<y)
      printf("%d, ",x);
   else if(x==y)
      printf("%d.",x);
   else if(x>y)
      return sum;
   sum=sum+x;
   natural(x+1,y);
}

void main()
{
    int l,u;
    printf("Enter lower limit: ");
    scanf("%d",&l);
    printf("\nEnter upper limit: ");
    scanf("%d",&u);
    printf("\nNatural numbers from % to %d are: ",l,u);
    natural(l,u);
    printf("\n\nSum of natural numbers from %d to %d = %d",l,u,sum);
    getch();
}

