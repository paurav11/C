#include <stdio.h>
#include <conio.h>
void max(int x,int y)
{
    if(x>y)
        printf("%d is Maximum.\n",x);
    else
        printf("%d is Maximum.\n",y);
}

void min(int x,int y)
{
    if(x<y)
        printf("%d is Minimum.\n",x);
    else
        printf("%d is Minimum.\n",y);
}

void main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    max(a,b);
    min(a,b);
    getch();
}

