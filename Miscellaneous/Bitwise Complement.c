#include <stdio.h>
void main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Bitwise complement of %d = %d",a,~a);
    getch();
}
