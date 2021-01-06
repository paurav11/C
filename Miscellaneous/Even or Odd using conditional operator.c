#include <stdio.h>
#include <conio.h>
void main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    (x%2==0)?printf("%d is even.",x):printf("%d is odd.",x);
    _getch();
}
