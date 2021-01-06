#include <stdio.h>
#include <conio.h>
void main()
{
    int l,b,Area;
    printf("Enter length & breadth:");
    scanf("%d%d",&l,&b);

    Area=l*b;
    printf("Area of rectangle is %d",Area);
    getch();
}
