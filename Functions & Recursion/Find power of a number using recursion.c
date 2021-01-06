#include <stdio.h>
#include <conio.h>
int power(int a,int b)
{
   while(b!=1)
   return a*power(a,b-1);
}
void main()
{
   int x,y;
   printf("Enter base number & its power: ");
   scanf("%d%d",&x,&y);
   printf("%d to the power %d = %d",x,y,power(x,y));
   getch();
}
