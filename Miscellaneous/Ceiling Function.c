#include <stdio.h>
#include <math.h>
void main()
{
    float x;
    int y;
    printf("Enter a number:");
    scanf("%f",&x);
    y=ceil(x);
    printf("Ceiling of a number %f is %d",x,y);
    getch();
}
