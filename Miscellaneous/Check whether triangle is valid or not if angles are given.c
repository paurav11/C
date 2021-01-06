#include <stdio.h>
#include <conio.h>
void main()
{
    int a1,a2,a3;
    printf("Enter the angles of a triangle: ");
    scanf("%d%d%d",&a1,&a2,&a3);

    if(a1+a2+a3==180)
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }
    _getch();
}
