#include <stdio.h>
#include <conio.h>
int i,j,r,c,count=0;
void check(int a[r][c])
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
      for(j=0;j<c;j++)
      {
          if(a[i][j]==0)
          {
              ++count;
          }
      }
   }

   if(count>=((r*c)/2))
   {
       printf("Matrix A is a sparse matrix.");
   }
   else
   {
       printf("Matrix A is not a sparse matrix.");
   }

}

void main()
{
    int a[20][20];
    printf("Enter no. of rows & columns of Matrix A: ");
    scanf("%d%d",&r,&c);
    check(a);
    getch();
}

