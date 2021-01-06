#include <stdio.h>
#include <math.h>
void main()
{
    int x,y,x1,x2,y1,y2;
    float D;
    printf("Enter the coordinates:\n");
    printf("\nEnter (x1,y1):");
    scanf("%d %d",&x1,&y1);
    printf("\nEnter (x2,y2):");
    scanf("%d %d",&x2,&y2);

    D=sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    printf("\nDistance between (%d,%d) & (%d,%d) = %f",x1,y1,x2,y2,D);
    getch();
}
