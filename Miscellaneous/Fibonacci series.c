#include <stdio.h>
#include <conio.h>
void main()
{
    int n,x,y,z,i;
    printf("Enter n: ");
    scanf("%d",&n);
    x=0;
    y=1;
    printf("Fibonacci series upto %d terms: ",n);
    printf("%d, ",x);
    printf("%d, ",y);
    for(i=3;i<=n;i++)
    {
        z=x+y;
        x=y;
        y=z;
        printf("%d",z);
        if(i==n)
        {
            printf(".");
        }
        else
            printf(", ");
    }
    _getch();
}
