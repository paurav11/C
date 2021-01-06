#include <stdio.h>
#include <conio.h>
void main()
{
    int n,num,i,j,k,fact,dcount,scount=0,sum,d[100],s[100];
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        sum=0;
        dcount=0;
        num=i;
        for(j=1;num!=0;j++)
        {
           dcount++;
           d[dcount]=num%10;
           num/=10;
        }

        for(j=1;j<=dcount;j++)
        {
           fact=1;
           for(k=1;k<=d[j];k++)
           {
             fact=fact*k;
           }
           sum=sum+fact;
        }

        if(sum==i)
        {
           scount++;
           s[scount]=i;
        }
    }
    printf("Strong numbers between 1 to %d are: \n",n);
    for(i=1;i<=scount;i++)
    {
        printf("%d",s[i]);
        if(i==scount)
        {
            printf(".");
        }
        else
        {
            printf(", ");
        }
    }
    _getch();
}


