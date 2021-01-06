#include <stdio.h>
#include <conio.h>
void odd(int x)
{
    if(x%2!=0)
        printf("\n%d is odd.",x);
}

void even(int x)
{
    if(x%2==0)
        printf("\n%d is even.",x);
}

void main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    odd(a);
    even(a);
    getch();
}
