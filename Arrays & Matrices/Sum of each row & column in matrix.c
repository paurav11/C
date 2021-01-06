#include <stdio.h>
#include <conio.h>
int i,j,r,c,s;
void sum(int a[r][c]);
void main()
{
    int a[20][20];
    printf("Enter no. of rows and columns of Matrix A: ");
    scanf("%d%d",&r,&c);
    sum(a);
    getch();
}

void sum(int a[r][c])
{
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
        s=0;
        for(j=0;j<c;j++)
        {
            s=s+a[i][j];
        }
        printf("\nSum of row %d = %d\n",i+1,s);
    }

    for(i=0;i<c;i++)
    {
        s=0;
        for(j=0;j<r;j++)
        {
            s=s+a[j][i];
        }
        printf("\nSum of column %d = %d\n",i+1,s);
    }
}
