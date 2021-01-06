#include<stdio.h>
#include<math.h>
#define PI 3.1416
int angle;
float x,y;
void main()
{
    printf("Enter the angle in degrees:");
    scanf("%d",&angle);
    x=(PI/180)*angle;
    y=1/sinh(x);
    printf("\ncosech(%d) = %.2f",angle,y);
    getch();
}
