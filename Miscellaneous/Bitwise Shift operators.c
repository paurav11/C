#include <stdio.h>
void main()
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter the no. of bits by which the number is to be shifted:");
    scanf("%d",&i);
    printf("Number obtained by bitwise right shift = %d\n",n>>i);
    printf("Number obtained by bitwise left shift = %d",n<<i);
    getch();
}
