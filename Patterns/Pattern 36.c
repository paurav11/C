#include <stdio.h>
#include <conio.h>
void main()
{
    int rows,space,i,j;
    printf("Enter no. of rows:");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(space=1;space<=rows-i;space++)
        {
            printf(" ");
        }

        for(j=1;j<=(2*i-1);j++)
        {
            if(j==1 || i==rows || j==(2*i-1))
               printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}

