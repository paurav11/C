#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j,r,c,a[20][20];
    printf("Enter no. of rows and columns of Matrix A: ");
    scanf("%d%d",&r,&c);
    printf("\nEnter elements of Matrix A: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of Matrix A: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n\n");
    }
    getch();
}





