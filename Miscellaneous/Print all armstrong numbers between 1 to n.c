#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int n,num,i,j,k=1,dcount,acount=0,d[100],a[100];
    printf("Enter n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        num=i;
        dcount=0;
        for(j=1;num!=0;j++)
        {
          dcount++;
          d[j]=num%10;
          num/=10;
        }
        if(dcount==1 && i==pow(d[1],1))
        {
             a[k]=i;
             acount++;
             k++;
        }
        else if(dcount==2 && i==pow(d[1],2)+pow(d[2],2))
        {
             a[k]=i;
             acount++;
             k++;
        }
        else if(dcount==3 && i==pow(d[1],3)+pow(d[2],3)+pow(d[3],3))
        {
             a[k]=i;
             acount++;
             k++;
        }
        else if(dcount==4 && i==pow(d[1],4)+pow(d[2],4)+pow(d[3],4)+pow(d[4],4))
        {
             a[k]=i;
             acount++;
             k++;
        }
        else if(dcount==5 && i==pow(d[1],5)+pow(d[2],5)+pow(d[3],5)+pow(d[4],5)+pow(d[5],5))
        {
             a[k]=i;
             acount++;
             k++;
        }
    }
    printf("Armstrong numbers between 1 to %d are: \n",n);
    for(k=1;k<=acount;k++)
    {
        printf("%d",a[k]);
        if(k==acount)
            printf(".");
        else
            printf(", ");
    }
    _getch();
}


