#include<stdio.h>
#include<conio.h>
void main()
{
     int i,n;
     clrscr();
     printf("Enter any number:");
     scanf("%d",&n);
     printf("even numbers up to inputted number are:");
     for(i=2;i<=n;i+=2)
     {
	     printf("%d\t",i);
     }
     getch();
}
