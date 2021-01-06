#include <stdio.h>
#include <conio.h>
int i,j,r,c,flag=0;
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
          if(i==j)
          {
              if(a[i][j]==1)
              {
                  flag=1;
              }
              else
              {
                  flag=0;
                  break;
              }
          }
          else
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
       printf("Matrix A is an identity matrix.");
   }
   else
   {
       printf("Matrix A is not an identity matrix.");
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

