#include <stdio.h>
#include <math.h>
void main()
{
    float x;
    int y;
    printf("Enter a number:");
    scanf("%f",&x);
    y=floor(x);
    printf("Floor of a number %f = %d",x,y);
    getch();
}
