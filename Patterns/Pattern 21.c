#include <stdio.h>
#include <conio.h>
void main()
{
    int n,space,i,j,k;
    printf("Enter the MAX value (n):");
    scanf("%d",&n);

    for(i=1;i<=(2*n-1);i++)
    {
        if(i<=n)
        {
            j=i;

            for(space=1;space<=n-i;space++)
            {
                printf(" ");
            }

            for(k=1;k<=j;k++)
            {
                printf("*");
            }
        }
        else
        {
            j=n-(i%n);

            for(space=1;space<=(i-n);space++)
            {
                printf(" ");
            }

            for(k=1;k<=j;k++)
            {
                printf("*");
            }

        }
        printf("\n");
    }
    getch();
}


