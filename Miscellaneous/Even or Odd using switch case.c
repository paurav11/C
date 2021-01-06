#include <stdio.h>
#include <conio.h>
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    switch(num%2)
    {
        case 0: printf("Number is even.");
                break;
        case 1: printf("Number is odd.");
                break;
    }
    _getch();
}
