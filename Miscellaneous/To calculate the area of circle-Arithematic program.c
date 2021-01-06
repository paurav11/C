#include <stdio.h>
#include <conio.h>
void main()
{
   float Pi=3.14,area,r;
   clrscr();
   printf("Enter the value for radius:");
   scanf("%f",&r);
   area=Pi*r*r;
   printf("%f is the area of the circle having radius %f",area,r);
   getch();
}
