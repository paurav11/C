#include <stdio.h>
#include <conio.h>
void main()
{
    int n,i,j,k,x;
    printf("Enter the MAX value (n):");
    scanf("%d",&n);
    x=n;

    for(i=1;i<=(2*n-1);i++)
    {
        if(i<=n)
        {
            j=i;
            for(k=n;k>=j;k--)
            {
                printf("%d ",x);
            }
            --x;
            printf("\n");
        }
        else
        {
             j=i-(n-1);
             x=i-(n-1);
             for(k=1;k<=j;k++)
             {
                 printf("%d ",x);
             }
             printf("\n");
        }
    }
    getch();
}
