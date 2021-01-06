#include <stdio.h>
#include <conio.h>
void main()
{
    int rows,space,i,j;
    printf("Enter no. of rows:");
    scanf("%d",&rows);
    space=(2*rows-2);

    for(i=1;i<=rows;i++)
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
    getch();
}

