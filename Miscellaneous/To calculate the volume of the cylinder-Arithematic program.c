#include <stdio.h>
#include <conio.h>
#define Pi 3.14
void main()
{
   float volume,r,h;
   clrscr();
   printf("Enter the value for radius:");
   scanf("%f",&r);
   printf("Enter the value for height:");
   scanf("%f",&h);
   volume=Pi*r*r*h;
   printf("%f is the Volume of the cylinder having radius,height %f",volume,r);
   getch();
}
