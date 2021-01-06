#include <stdio.h>
#include <conio.h>
int a[20][20];
int i,j,r,c,m;

void multiply(int a[r][c],int m)
{
    printf("\nEnter elements of Matrix: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter scalar multiplier: ");
    scanf("%d",&m);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            a[i][j]=m*a[i][j];
        }
    }
    printf("\nResultant Matrix: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n\n");
    }
}

void main()
{
    printf("Enter no. of rows and columns of Matrix: ");
    scanf("%d%d",&r,&c);
    multiply(a,m);
    getch();
}
