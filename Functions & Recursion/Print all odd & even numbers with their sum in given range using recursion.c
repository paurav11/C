#include <stdio.h>
#include <conio.h>
int oddsum=0;
int evensum=0;
int odd(int x,int y)
{
   if(x<=y)
   {
     if(x%2!=0)
     {
       oddsum=oddsum+x;
       if(x==y)
       {
           printf("%d.",x);
           return oddsum;
       }
       printf("%d, ",x);
     }
   }
   if(x>y)
   {
     return oddsum;
   }
   odd(x+1,y);
}

int even(int x,int y)
{
   if(x<=y)
   {
     if(x%2==0)
     {
       evensum=evensum+x;
       if(x==y)
       {
          printf("%d.",x);
          return evensum;
       }
       printf("%d, ",x);
     }
   }
   if(x>y)
   {
       return evensum;
   }
   even(x+1,y);
}

int main()
{
    int l,u;
    printf("Enter lower limit: ");
    scanf("%d",&l);
    printf("Enter upper limit: ");
    scanf("%d",&u);
    printf("\nOdd numbers from %d to %d are: ",l,u);
    odd(l,u);
    printf("\nSum of odd numbers = %d\n",oddsum);
    printf("\nEven numbers from %d to %d are: ",l,u);
    even(l,u);
    printf("\nSum of even numbers = %d",evensum);
    getch();
    return 0;
}


