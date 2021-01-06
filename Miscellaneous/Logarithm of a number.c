#include <stdio.h>
#include <math.h>
void main()
{
    int x;
    float y;
    printf("Enter the number:");
    scanf("%d",&x);
    y=log(x);
    printf("log(%d) = %f",x,y);
    getch();
}
