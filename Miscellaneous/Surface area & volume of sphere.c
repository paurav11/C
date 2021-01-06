#include <stdio.h>
#include <math.h>
#define PI 3.14
void main()
{
    int r;
    float SA,V;
    printf("Enter radius:");
    scanf("%d",&r);
    SA=4*PI*pow(r,2);
    V=(4/3)*PI*pow(r,3);
    printf("Surface area of sphere = %.2f\n",SA);
    printf("Volume of sphere = %.2f",V);
    getch();
}
