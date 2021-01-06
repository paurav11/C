#include <stdio.h>
void main()
{
    float C,F;
    printf("Enter temperature in *C:");
    scanf("%f",&C);
    F=((9*C/5) + 32);
    printf("Temperature in *F = %f",F);
    getch();
}
