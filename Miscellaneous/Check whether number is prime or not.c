#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int num,d[50],count=0,i;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num!=1)
    {
      printf("Factors of %d are: ",num);
      for(i=1;i<=num;i++)
      {
         if(num%i==0)
         {
            count++;
            d[count]=i;
            printf("%d",d[count]);
            if(i==num)
            {
                printf(".");
            }
            else
            {
                printf(", ");
            }
         }
      }
    }
    else
    {
        printf("1 is neither prime nor composite.");
        exit(0);
    }

    if(count==2 && d[1]==1 && d[count]==num)
    {
        printf("\n%d is prime.",num);
    }
    else
    {
        printf("\n%d is not prime.",num);
    }
    _getch();
}
