#include <stdio.h>
#include <conio.h>
int a[20][20],b[20][20],c[20][20];
int i,j,k,r1,c1,r2,c2;

void multiply(int a[r1][c1],int b[r2][c2])
{
    printf("\nEnter elements of Matrix 1: \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter elements of Matrix 2: \n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            c[i][j]=0;
            for(k=0;k<r2;k++)
            {
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
    printf("Resultant Matrix: \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n\n");
    }
}

void main()
{
    printf("Enter no. of rows and columns of Matrix 1: ");
    scanf("%d%d",&r1,&c1);
    printf("\nEnter no. of rows and columns of Matrix 2: ");
    scanf("%d%d",&r2,&c2);
    if(c1==r2)
    {
        multiply(a,b);
    }
    else
    {
        printf("\nMatrix multiplication is not possible.");
    }
    getch();
}


