#include <stdio.h>
#include <conio.h>
void main()
{
    int rows,space,i,k;
    printf("Enter no. of rows:");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(space=rows-1;space>=i;space--)
        {
            printf(" ");
        }

        for(k=1;k<=i;k++)
        {
            if(k%2==0)
            printf("1");
            else
            printf("0");
        }
        printf("\n");
    }
    getch();
}
