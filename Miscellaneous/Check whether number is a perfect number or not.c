#include <stdio.h>
#include <conio.h>
void main()
{
    int num,i,j=1,d[100],sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Proper divisors of %d are: ",num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            d[j]=i;
            printf("%d ",i);
            sum=sum+d[j];
            j++;
        }
    }
    if(sum==num)
    {
        printf("\n%d is a perfect number.",num);
    }
    else
    {
        printf("\n%d is not a perfect number.",num);
    }
    _getch();
}

