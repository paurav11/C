#include <stdio.h>
#include <math.h>
#define PI 3.14
void main()
{
    int x,y,x1,x2,y1,y2;
    float r,D,P,A;
    printf("\nEnter (x1,y1):");
    scanf("%d %d",&x1,&y1);
    printf("\nEnter (x2,y2):");
    scanf("%d %d",&x2,&y2);

    D=sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    r=D/2;
    P=2*PI*r;
    A=PI*pow(r,2);

    printf("\nPerimeter & Area of the circle are %.2f & %.2f respectively.",P,A);
    getch();
}
