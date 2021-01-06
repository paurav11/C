#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j,r,c,a[20][20],b[20][20],flag=0;
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
            b[i][j]=a[j][i];
            printf("%d ",b[i][j]);
        }
        printf("\n\n");
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]==b[i][j])
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
    }

    if(flag==1)
    {
        printf("Matrix A is a symmetric matrix.");
    }
    else
    {
        printf("Matrix A is not a symmetric matrix.");
    }
    getch();
}






