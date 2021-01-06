#include <stdio.h>
#include <conio.h>
int cube(int x)
{
    return(x*x*x);
}
void main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Cube of %d = %d",a,cube(a));
    getch();
}
