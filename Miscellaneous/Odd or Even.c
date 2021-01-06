#include <stdio.h>
#include <conio.h>
void main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);

    if(x%2==0)
    {
        printf("NUMBER IS EVEN");
    }
    else
    {
        printf("NUMBER IS ODD");
    }
    getch();
}
