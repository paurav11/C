#include <stdio.h>
#include <conio.h>
void main()
{
   float N,dozen,r;
   clrscr();
   printf("Enter the value of N>=0");
   scanf("%f",&N,&dozen);
   doz=N/12;
   printf("%f is the dozen having N%");
   r=N%12;
   printf("%f is the remainder having N,%d");
   getch();
}
