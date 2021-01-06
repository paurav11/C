#include <stdio.h>
#include <conio.h>
void main()
{
    int n,space,i,j;
    printf("Enter the MAX value (n):");
    scanf("%d",&n);

    for(i=1;i<=(2*n-1);i++)
    {
        if(i==n)
        {
            for(j=1;j<=(2*n-1);j++)
                printf("+");

            printf("\n");
        }
        else
        {
            for(space=1;space<=n-1;space++)
                printf(" ");

            for(j=1;j<=1;j++)
                printf("+");

            printf("\n");
        }
    }
    getch();
}
