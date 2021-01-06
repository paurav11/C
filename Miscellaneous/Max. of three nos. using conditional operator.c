#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    (a>b && a>c)?printf("%d is maximum.",a):(b>c)?printf("%d is maximum.",b):printf("%d is maximum.",c);
    _getch();
}

