#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j,r,c,a[20][20],flag=0,sum=0;
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
            if(i<j)
            {
               if(a[i][j]==0)
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
    }

    if(flag==1)
    {
        printf("\nMatrix A is a lower triangular matrix.");
        for(i=0;i<r;i++)
        {
           for(j=0;j<c;j++)
           {
               if(i>j)
               {
                  sum=sum+a[i][j];
               }
           }
        }
        printf("\nSum of lower triangular Matrix A = %d",sum);
    }
    else
    {
        printf("\nMatrix A is not a lower triangular matrix.");
    }
    getch();
}




