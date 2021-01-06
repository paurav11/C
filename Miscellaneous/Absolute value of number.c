#include <stdio.h>
#include <math.h>
void main()
{
    int x,y;
    printf("Enter any integer:");
    scanf("%d",&x);
    y=fabs(x);
    printf("Absolute value of %d = %d",x,y);
    getch();
}
