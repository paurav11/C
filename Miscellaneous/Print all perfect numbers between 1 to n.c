#include <stdio.h>
#include <conio.h>
void main()
{
    int n,i,j,k,count=0,d[100],p[100],sum;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        k=1;
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
               d[k]=j;
               sum=sum+d[k];
               k++;
            }
        }
        if(sum==i)
        {
            count++;
            p[count]=i;
        }
    }
    printf("Perfect numbers between 1 to %d are: \n",n);
    for(k=1;k<=count;k++)
    {
        printf("%d",p[k]);
        if(k==count)
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


