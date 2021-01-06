#include <stdio.h>
#include <conio.h>
void main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    (year%4==0)?printf("%d is a leap year.",year):printf("%d is not a leap year.",year);
    _getch();
}
