#include <stdio.h>
void main()
{
    int n,i,ans;
    printf("Enter a number:");
    scanf("%d",&n);

    for(i=1;i<11;i++)
    {
        ans=n*i;
        printf("\n%d x %d = %d\n",n,i,ans);
    }
    getch();
}
