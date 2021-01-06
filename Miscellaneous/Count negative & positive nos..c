#include <stdio.h>
void main()
{
    int i,n,pos_count=0,neg_count=0;
    printf("Enter the numbers:");

    for(i=1;i<=10;i++)
    {
        scanf("%d",&n);

        if(n>0)
        {
            pos_count++;
        }
        else if(n<0)
        {
            neg_count++;
        }
        else if(n==0)
        {
            break;
        }
    }
    printf("\n");
    printf("Positive numbers = %d\nNegative numbers = %d",pos_count,neg_count);
    getch();
}
