#include <stdio.h>
#include <conio.h>
int i,j,r,c;
void sum(int a[r][c])
{
   int sum=0;
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
          if((i+j==r-1) || (i+j==c-1))
          {
              sum=sum+a[i][j];
          }
      }
   }
   printf("\nSum of main diagonal elements of Matrix A = %d",sum);
}

void main()
{
    int a[20][20];
    printf("Enter no. of rows & columns of Matrix A: ");
    scanf("%d%d",&r,&c);
    sum(a);
    getch();
}
