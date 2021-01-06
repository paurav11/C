#include <stdio.h>
#include <conio.h>
int i,j,r1,c1,r2,c2;
void equal(int a[r1][c1],int b[r2][c2])
{
   int flag=0;
   if(r1==r2 && c1==c2)
   {
       printf("\nEnter elements of Matrix A: \n");
       for(i=0;i<r1;i++)
       {
          for(j=0;j<c1;j++)
          {
             scanf("%d",&a[i][j]);
          }
          printf("\n");
       }
       printf("\nEnter elements of Matrix B: \n");
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
           for(j=0;j<c1;j++)
           {
               if(a[i][j]==b[i][j])
               {
                   flag=1;
               }
               else
               {
                   flag=0;
                   goto label;
               }
           }
       }
       label:
       if(flag==1)
       {
           printf("\nMatrices are equal.");
       }
       else
       {
           printf("\nMatrices are not equal.");
       }
   }
   else
   {
       printf("\nMatrices are not equal.");
   }
}

void main()
{
    int a[20][20],b[20][20];
    printf("Enter no. of rows & columns of Matrix A: ");
    scanf("%d%d",&r1,&c1);
    printf("\nEnter no. of rows & columns of Matrix B: ");
    scanf("%d%d",&r2,&c2);
    equal(a,b);
    getch();
}
