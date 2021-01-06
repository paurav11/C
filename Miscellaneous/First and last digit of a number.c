#include <stdio.h>
#include <conio.h>
void main()
{
    long int num;
    int count=0,d[50];
    printf("Enter a number: ");
    scanf("%lld",&num);

    while(num!=0)
    {
        count++;
        d[count]=num%10;
        num/=10;
    }
    printf("First digit = %d\n",d[count]);
    printf("Last digit = %d",d[1]);
    _getch();
}


