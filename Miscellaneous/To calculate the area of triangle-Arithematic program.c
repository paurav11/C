#include <stdio.h>
#include <conio.h>
void main()
{
   float area,base,h;
   clrscr();
   printf("Enter the value for base:");
   scanf("%f",&base);
   printf("Enter the value for height:");
   scanf("%f",&h);
   area=0.5*base*h;
   printf("%f is the area of the triangle having base,height %f",area,0.5);
   getch();
}