#include <stdio.h>
#include <math.h>
void main()
{
    int x;
    float y;
    printf("Enter the power of exponential:");
    scanf("%d",&x);
    y=exp(x);
    printf("Exponential of %d = %f",x,y);
    getch();
}
