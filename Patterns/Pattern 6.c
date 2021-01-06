#include <stdio.h>
#include <conio.h>
void main()
{
    int rows,i,j,k;
    printf("Enter no. of rows:");
    scanf("%d",&rows);

    for(i=0;i<rows;i++)
    {
        k=1;
        for(j=rows-1;j>=i;j--)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
    getch();
}
