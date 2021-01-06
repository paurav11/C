#include <stdio.h>
#include <conio.h>
void main()
{
    int rows,i,j;
    printf("Enter no. of rows:");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}
