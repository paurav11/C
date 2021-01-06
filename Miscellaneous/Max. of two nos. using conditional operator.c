#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    (a>b)?printf("%d is greater than %d.",a,b):printf("%d is greater than %d.",b,a);
    _getch();
}
