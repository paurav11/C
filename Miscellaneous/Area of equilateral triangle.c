#include <stdio.h>
#include <math.h>
int main()
{
    int s;
    float a;
    printf("Enter side of an equilateral triangle: ");
    scanf("%d",&s);
    a=(sqrt(3)/4)*(s*s);
    printf("Area of equilateral triangle = %.2f",a);
    return 0;
}
