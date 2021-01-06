#include <stdio.h>
#include <conio.h>
void main()
{
    int num,fact=1,i;
    printf("Enter a number: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d = %d",num,fact);
    _getch();
}
