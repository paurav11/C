#include <stdio.h>
#include <conio.h>
int exchange(int *,int *);
void main()
{
    int x,y;
    x=150;
    y=50;
    printf("Before exchanging values: \n");
    printf("x = %d\n",x);
    printf("y = %d\n",y);
    exchange(&x,&y);
    printf("After exchanging values: \n");
    printf("x = %d\n",x);
    printf("y = %d\n",y);
    _getch();
}

int exchange(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
