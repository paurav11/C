#include <stdio.h>
#include <conio.h>
void main()
{
    int rows,space,coef,i,j;
    printf("Enter no. of rows:");
    scanf("%d",&rows);

    for(i=0;i<rows;i++)
    {
        for(space=1;space<=rows-i;space++)
        {
            printf(" ");
        }

        for(j=0;j<=i;j++)
        {
            if(j==0 || i==0)
            {
                coef=1;
            }
            else
            {
                coef=coef*(i-j+1)/j;
            }
            printf("%d ",coef);
        }
        printf("\n");
    }
getch();
}
