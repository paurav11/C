#include <stdio.h>
#include <conio.h>
#define PI 3.14
float diameter(float r)
{
    int d;
    d=2*r;
    return d;
}

float circumference(float r)
{
    int c;
    c=2*PI*r;
    return c;
}

float area(float r)
{
    int a;
    a=PI*r*r;
    return a;
}

void main()
{
    float r;
    printf("Enter radius:");
    scanf("%f",&r);
    printf("\nDiameter = %.2f units\n",diameter(r));
    printf("\nCircumference = %.2f units\n",circumference(r));
    printf("\nArea = %.2f units",area(r));
    getch();
}
