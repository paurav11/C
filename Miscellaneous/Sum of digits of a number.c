#include <stdio.h>
#include <conio.h>
void main()
{
    long int num;
    int i,sum=0,d[50];
    printf("Enter a number: ");
    scanf("%lld",&num);

    for(i=1;num!=0;i++)
    {
       d[i]=num%10;
       num/=10;
       sum=sum+d[i];
    }
    printf("Sum of digits = %d",sum);
    _getch();
}
