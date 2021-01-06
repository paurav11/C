#include <stdio.h>
#include <conio.h>
void main()
{
    int n,space,i,j;
    printf("Enter the MAX value (n):");
    scanf("%d",&n);

    for(i=1;i<=(2*n);i++)
    {
        if(i<=n)
        {
             for(space=1;space<=n-i;space++)
                printf(" ");

             for(j=1;j<=i;j++)
             {
                 printf("* ");
             }
             printf("\n");
        }
        else
        {
             for(space=1;space<(i-n);space++)
                printf(" ");

             for(j=n;j>=i-n;j--)
             {
                 printf("* ");
             }
             printf("\n");
        }
    }
    getch();
}
