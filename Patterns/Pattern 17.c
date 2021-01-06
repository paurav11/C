#include <stdio.h>
#include <conio.h>
void main()
{
    int rows,space=0,i,j;
    printf("Enter no. of rows:");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(j=i;j<=rows;j++)
            printf("*");

        for(j=0;j<space;j++)
            printf(" ");

        for(j=i;j<=rows;j++)
            printf("*");

        space+=2;
        printf("\n");
    }
    getch();
}
