#include <stdio.h>
#include <conio.h>
void main()
{
    int *p;
    int x=10;
    printf("\nAddress of x = %d",&x);
    printf("\nValue of x = %d",x);
    p=&x;
    printf("\nAddress of pointer p = %d",p);
    printf("\nContent of pointer p = %d",*p);
    x=11;
    printf("\nContent of pointer p = %d",*p);
    printf("\nEnter a new value of pointer variable: ");
    scanf("%d",*(&p));
    printf("\nContent of pointer p = %d",*p);
    printf("\nAddress of pointer p = %d",p);
    _getch();
}
