#include <stdio.h>
#include <conio.h>
void main()
{
    int num,lsb;
    printf("Enter a number: ");
    scanf("%d",&num);

    /*To check LSB of a number we need to perform
    bitwise ANDing. The bitwise AND operation (number & 1)
    will evaluate to 1 if LSB of number is set i.e. 1
    otherwise evaluates to 0.*/

    lsb=num & 1;
    if(lsb==1)
        printf("LSB of %d is set(1).",num);
    else
        printf("LSB of %d is unset(0).",num);
    _getch();
}
