#include <stdio.h>
#include <conio.h>
int factorial(int);
void main()
{
    int n,f;
    printf("Enter a number: ");
    scanf("%d",&n);
    f=factorial(n);
    printf("Factorial of %d = %d\n",n,f);
    _getch();
}
int factorial(int n)
{
    if(n==1)
    {
        return(1);
    }
    else
    {
        return n*factorial(n-1);
    }
}
