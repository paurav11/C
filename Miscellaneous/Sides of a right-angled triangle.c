#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int a,b,c,x,y,z;
    printf("Enter three sides of a triangle:");
    scanf("%d%d%d",&a,&b,&c);
    x=pow(a,2);
    y=pow(b,2);
    z=pow(c,2)+1;
    printf("%d %d %d\n",x,y,z);

    if(x==(y+z) || y==(x+z) || z==(x+y))
    {
        printf("These are the sides of a right-angled triangle.");
    }
    else
    {
        printf("These are not the sides of a right-angled triangle.");
    }
    getch();
}
