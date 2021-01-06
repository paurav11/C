#include <stdio.h>
void main()
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i<2)
        printf("1");
        else
        printf("+(1/%d)",i);
        continue;
    }
    getch();
}
