#include <stdio.h>
void main()
{
    int x,y,z,t;
    printf("Enter the values:");
    scanf("%d%d%d",&x,&y,&z);
    t=x;
    x=y;
    y=z;
    z=t;
    printf("%d %d %d",x,y,z);
    getch();
}
