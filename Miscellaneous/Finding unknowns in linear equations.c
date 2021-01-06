#include <stdio.h>
#include <conio.h>
int a,b,c,d,m,n,x1,x2;
void main()
{
   printf("Enter the values of a,b,c,d,m,n:");
   scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&m,&n);

   if((a*d)-(c*b)!=0)
   {
       x1=((m*d)-(b*n))/((a*d)-(c*b));
       x2=((n*a)-(m*c))/((a*d)-(c*b));
       printf("The denominator (ad-bc) being nonzero, the values of x1 & x2 are %d & %d respectively.",x1,x2);
   }
   else
   {
       printf("The values of x1 & x2 are not defined, because value of denominator (ad-bc) is zero.");
   }
   getch();
}
