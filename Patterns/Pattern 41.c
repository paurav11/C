#include <stdio.h>
#include <conio.h>
void main()
{
    int n,count,i,j;
    printf("Enter the MAX value (n):");
    scanf("%d",&n);
    count=2*n-1;

    for(i=1;i<=count;i++)
    {
        for(j=1;j<=count;j++)
        {
            if(j==i || j==count-i+1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}
