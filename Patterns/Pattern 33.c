#include <stdio.h>
#include <conio.h>
void main()
{
    int rows,i,j;
    printf("Enter no. of rows:");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(j=i;j<=rows;j++)
        {
            if(i==1 || i==j || j==rows)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}

