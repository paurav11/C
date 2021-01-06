#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
    int i,j,r,c,a[20][20],determinant;
    printf("Enter no. of rows and columns of Matrix A (2x2 or 3x3): ");
    scanf("%d%d",&r,&c);
    if((r==2 && c==2) || (r==3 && c==3))
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
    }
    else
    {
        exit(0);
    }

    if(r==2 && c==2)
    {
        determinant=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
        printf("Determinant of 2x2 Matrix A = |A| = %d",determinant);
    }

    if(r==3 && c==3)
    {
        determinant=a[0][0]*((a[1][1]*a[2][2])-(a[1][2]*a[2][1]))-
                    a[0][1]*((a[1][0]*a[2][2])-(a[1][2]*a[2][0]))+
                    a[0][2]*((a[1][0]*a[2][1])-(a[1][1]*a[2][0]));
        printf("Determinant of 3x3 Matrix A = |A| = %d",determinant);
    }
    getch();
}
