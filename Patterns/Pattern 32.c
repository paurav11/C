#include <stdio.h>
#include <conio.h>
void main()
{
    int rows,i,j;
    printf("Enter no. of rows:");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==1 || i==rows || j==1 || i==j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}

