#include <stdio.h>
#include <conio.h>
void main()
{
    int n,i,j,k;
    printf("Enter the MAX value (n):");
    scanf("%d",&n);

    for(i=1;i<=(2*n-1);i++)
    {
        if(i<=n)
        j=i;
        else
        j=n-(i%n);

        for(k=1;k<=j;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}

