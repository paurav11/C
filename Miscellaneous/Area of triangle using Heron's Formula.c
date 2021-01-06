#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,c;
    float S,A;
    printf("Enter the sides:");
    scanf("%d %d %d",&a,&b,&c);

    S=(a+b+c)/2;
    A=sqrt(S*(S-a)*(S-b)*(S-c));

    printf("Area of triangle = %f",A);
    getch();
}
