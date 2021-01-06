#include <stdio.h>
#include <conio.h>
void main()
{
    int n,space,i,j;
    printf("Enter the MAX value (n):");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        for(space=1;space<i;space++)
            printf("  ");

        for(j=i;j<=n;j++)
            printf("*");
        printf("\n");
    }

    for(i=1;i<=n;i++)
    {
        for(space=1;space<=n-i;space++)
            printf("  ");

        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
    getch();
}
