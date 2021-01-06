#include <stdio.h>
void main()
{
    int i,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("\nEven nos. from 1 to %d are:",n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        printf("\n%d",i);
    }
    getch();
}
