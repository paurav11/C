#include <stdio.h>
#include <conio.h>
void main()
{
    long int num;
    int count=0;
    printf("Enter a number: ");
    scanf("%lld",&num);

    while(num!=0)
    {
        count++;
        num/=10;
    }
    printf("No. of digits = %d",count);
    _getch();
}

