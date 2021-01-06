#include <stdio.h>
void main()
{
    float num;
    int ip,rm;
    printf("Enter a floating point number:");
    scanf("%f",&num);
    ip=(int)num;
    rm=ip%10;
    printf("Right most digit of integral part of the number = %d",rm);
    getch();
}
