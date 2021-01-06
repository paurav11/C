#include <stdio.h>
#include <conio.h>
void main()
{
    int n,i,j,k;
    printf("Enter no. of rows:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i<(n/2)+1)
            j=i;
        else
            j=n-i+1;

        for(k=0;k<=n-j;k++)
          printf(" ");

        for(k=1;k<j;k++)
            printf("%d",k);

        for(k=j;k>=1;k--)
            printf("%d",k);

        printf("\n");
    }
    getch();
}

