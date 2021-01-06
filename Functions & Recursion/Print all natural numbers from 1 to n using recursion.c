#include <stdio.h>
#include <conio.h>
int y=1;
void natural(int x)
{
   while(y<=x)
   {
     if(y<x)
     {
        printf("%d, ",y);
     }
     else
     {
         printf("%d.",y);
     }
     ++y;
     natural(x);
   }
}

void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Natural numbers from 1 to %d are: ",n);
    natural(n);
    getch();
}
