#include<stdio.h>
#include<conio.h>
void main()
{
   int n,c=2;
   clrscr();
   printf("Enter a number to check if it is prime:");
   scanf("%d",&n);

   for(c=2;c<=n-1;c++)
   {
      printf("%d is the Number\n",c);
      if(n%c==0)
      {
	 printf("%d is not prime.\n",n);

	 break;
      }
   }
   if(c==n)
      printf("%d is prime.\n", n);
      getch();
}