#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("Bitwise XOR of %d and %d = %d",a,b,a^b);
    getch();
}
