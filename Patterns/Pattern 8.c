#include <stdio.h>
#include <conio.h>
void main()
{
    int rows,space,i,j,k;
    printf("Enter no. of rows:");
    scanf("%d",&rows);
    j=(2*rows-1);

    for(i=1;i<=rows;i++)
    {
        for(space=1;space<i;space++)
        {
            printf(" ");
        }

        for(k=1;k<=j;k++)
        {
            printf("*");
        }
        j-=2;
        printf("\n");
    }
    getch();
}

