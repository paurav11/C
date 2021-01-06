#include <stdio.h>
#include <math.h>
#define PI 3.14
void main()
{
    int x,y,x1,x2,y1,y2;
    float r,P,A;
    x1=0;
    y1=0;
    printf("The center of this circle is (0,0).\n\n");
    printf("Enter the point on circumference:\n");
    printf("\nEnter (x2,y2):");
    scanf("%d %d",&x2,&y2);

    r=sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    P=2*PI*r;
    A=PI*pow(r,2);

    printf("\nPerimeter & Area of the circle are %.2f & %.2f respectively.",P,A);
    getch();
}

