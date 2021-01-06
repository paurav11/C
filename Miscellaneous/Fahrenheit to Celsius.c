#include <stdio.h>
void main()
{
    float C,F;
    printf("Enter temperature in *F:");
    scanf("%f",&F);
    C=(5*(F-32)/9);
    printf("Temperature in *C = %f",C);
    getch();
}

