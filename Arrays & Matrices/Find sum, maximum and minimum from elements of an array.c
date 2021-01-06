#include <stdio.h>
#include <conio.h>
int i;
int sum(int x[])
{
   int s=0;
   for(i=0;i<10;i++)
   {
      s=s+x[i];
   }
   return s;
}

int max(int x[])
{
   int mx;
   mx=x[0];
   for(i=1;i<10;i++)
   {
     if(x[i]>mx)
        mx=x[i];
   }
   return mx;
}

int min(int x[])
{
   int mi;
   mi=x[0];
   for(i=1;i<10;i++)
   {
     if(x[i]<mi)
        mi=x[i];
   }
   return mi;
}

void main()
{
    int a[10];
    printf("Enter elements of array: \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nSum of all array elements = %d",sum(a));
    printf("\nMaximum of all array elements = %d",max(a));
    printf("\nMinimum of all array elements = %d",min(a));
    getch();
}
