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
    y=1/cos(x);
    printf("\nsec(%d) = %.2f",angle,y);
    getch();
}

