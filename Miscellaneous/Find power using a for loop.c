#include <stdio.h>
#include <conio.h>
void main()
{
    int pow=1,i,p,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter the power: ");
    scanf("%d",&p);

    for(i=1;i<=p;i++)
    {
        pow=pow*n;
    }
    printf("%d to the power %d = %d",n,p,pow);
    _getch();
}
