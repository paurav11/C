#include <stdio.h>
void main()
{
    float a,b,c;
    printf("Enter two numbers:");
    scanf("%f%f",&a,&b);
    c=a/b;
    printf("Division of %.2f & %.2f = %.2f",a,b,c);
    getch();
}
