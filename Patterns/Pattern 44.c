#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    int n,i,j,length;
    char name[50];
    printf("Enter name:");
    gets(name);
    printf("Enter the value of n:");
    scanf("%d",&n);
    length=strlen(name);

    for(i=n/2;i<=n;i+=2)
    {
        for(j=1;j<n-i;j+=2)
            printf(" ");

        for(j=1;j<=i;j++)
            printf("*");

        for(j=1;j<=n-i;j++)
            printf(" ");

        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }

    for(i=n;i>=1;i--)
    {
        for(j=i;j<n;j++)
            printf(" ");

        if(i==n)
        {
            for(j=1;j<=(2*n-length)/2;j++)
                printf("*");

            printf("%s",name);

            for(j=1;j<(2*n-length)/2;j++)
                printf("*");
        }
        else
        {
            for(j=1;j<=(2*i-1);j++)
                printf("*");
        }
        printf("\n");
    }
    getch();
}

