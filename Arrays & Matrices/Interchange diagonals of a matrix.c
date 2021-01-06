#include <stdio.h>
#include <conio.h>
void main()
{
    int a[20][20],temp,i,j,r,c;
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

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
               temp=a[i][j];
               a[i][j]=a[i][r-j-1];
               a[i][r-j-1]=temp;
            }
        }
    }

    printf("\nMatrix obtained after interchanging two diagonals: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n\n");
    }
    getch();
}


