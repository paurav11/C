#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c;
    printf("Enter the sides of a triangle: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a+b>c && b+c>a && a+c>b)
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }
    _getch();
}

