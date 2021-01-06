#include <stdio.h>
#include <conio.h>
void main()
{
    int num,n,i,j,fact,count=0,sum=0,d[50];
    printf("Enter a number: ");
    scanf("%d",&n);
    num=n;

    for(i=1;n!=0;i++)
    {
       count++;
       d[count]=n%10;
       n/=10;
    }

    for(i=1;i<=count;i++)
    {
        fact=1;
        for(j=1;j<=d[i];j++)
        {
            fact=fact*j;
        }
        sum=sum+fact;
    }

    if(sum==num)
    {
        printf("\n%d is a strong number.",num);
    }
    else
    {
        printf("\n%d is not a strong number.",num);
    }
    _getch();
}

