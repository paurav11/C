#include <stdio.h>
#include <conio.h>
void main()
{
    int rows,space,i,j;
    printf("Enter no. of rows:");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
            for(j=1;j<=rows;j++)
            {
                if(i==1 || i==rows || j==1 || j==rows || i==j || j==(rows-i+1))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
    }
    getch();
}


