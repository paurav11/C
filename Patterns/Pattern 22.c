#include <stdio.h>
#include <conio.h>
void main()
{
    int n,space,i,j;
    printf("Enter the MAX value (n):");
    scanf("%d",&n);

    space=(2*n-2);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("*");

        for(j=space;j>=1;j--)
            printf(" ");

        for(j=1;j<=i;j++)
            printf("*");

        space-=2;
        printf("\n");
    }

    space=0;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
            printf("*");

        for(j=0;j<space;j++)
            printf(" ");

        for(j=i;j<=n;j++)
            printf("*");

        space+=2;
        printf("\n");
    }
    getch();
}


