#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int n,d[100],p[100],fcount,sum=0,i,j,pcount=0,k=1;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
       fcount=0;
       for(j=1;j<=i;j++)
       {
         if(i%j==0)
         {
           fcount++;
           d[fcount]=j;
         }

         if(fcount==2 && d[1]==1 && d[fcount]==i)
         {
            pcount++;
            p[k]=i;
            sum=sum+p[k];
            k++;
         }
       }
    }
    printf("Prime numbers between 1 & %d are: \n",n);
    for(k=1;k<=pcount;k++)
    {
        printf("%d",p[k]);
        if(k==pcount)
        {
            printf(".");
        }
        else
        {
            printf(", ");
        }
    }
    printf("\n\nSum of all prime numbers between 1 & %d = %d",n,sum);
    _getch();
}
