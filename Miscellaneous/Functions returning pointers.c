#include <stdio.h>
#include <conio.h>
int *larger(int *,int *);
void main()
{
    int x,y,*p;
    x=10;
    y=20;
    printf("x = %d\n",x);
    printf("y = %d\n",y);
    p=larger(&x,&y);
    printf("\n%d is larger.",*p);
    _getch();
}

int *larger(int *a,int *b)
{
    if(*a>*b)
        return (a);
    else
        return (b);
}
