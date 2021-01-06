#include <stdio.h>
#include <conio.h>
void main()
{
    int num,product=1,i,d[50];
    printf("Enter a number: ");
    scanf("%d",&num);

    for(i=1;num!=0;i++)
    {
       d[i]=num%10;
       num/=10;
       product*=d[i];
    }
    printf("Product of digits = %d",product);
    _getch();
}
