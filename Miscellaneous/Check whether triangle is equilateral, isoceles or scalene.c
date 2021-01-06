#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c;
    printf("Enter the sides of a triangle: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a==b && b==c && a==c)
    {
        printf("Triangle is equilateral.");
    }
    else if(a==b || b==c || a==c)
    {
        printf("Triangle is isoceles.");
    }
    else
    {
        printf("Triangle is scalene.");
    }
    _getch();
}
