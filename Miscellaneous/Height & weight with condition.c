#include <stdio.h>
void main()
{
    int h,w,i,count=0;

    for(i=0;i<=10;i++)
    {
        printf("Enter height:");
        scanf("%d",&h);
        printf("Enter weight:");
        scanf("%d",&w);
        printf("\n");

        if(h>=170 && w<=60)
        {
            count=count+1;
        }
    }
    printf("People satisfying the condition = %d",count);
    getch();
}
