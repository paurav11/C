#include <stdio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter Nth number:");
    scanf("%d",&n);

    for(i=1;i<=(n*2);i=i+2)
    {
        sum=sum+i;
    }
    printf("Sum of first %d odd numbers = %d",n,sum);
    getch();
}
