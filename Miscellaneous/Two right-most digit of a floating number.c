#include <stdio.h>
void main()
{
    float num;
    int ip1,ip2,rm1,rm2;
    printf("Enter a floating point number:");
    scanf("%f",&num);
    ip1=(int)num;
    rm1=ip1%10;
    ip2=ip1/10;
    rm2=ip2%10;
    printf("Two right most digit of integral part of the number = %d & %d",rm2,rm1);
    getch();
}

