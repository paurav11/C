#include <stdio.h>
#include <conio.h>
void main()
{
    int x,*p1,**p2;
    x=100;
    p1=&x;
    p2=&p1;
    printf("Content of pointer p2 = %d",**p2);
    _getch();
}
