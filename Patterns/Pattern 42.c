#include <stdio.h>
#include <conio.h>
void main()
{
    int n,i,j;
    printf("Enter the MAX value (n):");
    scanf("%d",&n);

    for(i=1;i<=(2*n-1);i++)
    {
        if(i==1 || i==n || i==(2*n-1))
        {
            for(j=1;j<=1;j++)
                printf(" ");

            for(j=1;j<=(n-2);j++)
                printf("*");

            printf("\n");
        }
        else
        {
            for(j=1;j<=n;j++)
            {
                if(j==1 || j==n)
                   printf("*");
                else
                   printf(" ");
            }
            printf("\n");
        }

    }
}
