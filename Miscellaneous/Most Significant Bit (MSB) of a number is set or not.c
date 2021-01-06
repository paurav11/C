#include <stdio.h>
#include <conio.h>
#define BITS sizeof(int)*8
void main()
{
    int num,msb;
    printf("Enter a number: ");
    scanf("%d",&num);

    /*To get MSB of the number, move first bit of 1 to highest order.
    Left shift 1 bits - 1 times and store result in some variable say msb = 1 << (bits - 1).
    If bitwise AND operation num & msb evaluate to 1 then MSB of num is set otherwise not.*/

    msb=1<<(BITS-1);

    if(num & msb)
        printf("MSB of %d is set(1).",num);
    else
        printf("MSB of %d is unset(0).",num);
    _getch();
}

