#include <stdio.h>
#include <conio.h>
void main()
{
    int rows,i,j,k=65;
    printf("Enter no. of rows:");
    scanf("%d",&rows);

    for(i=0;i<rows;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c ",k);
        }
        k++;
        printf("\n");
    }
    getch();
}

