#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
    int a[100],i,n,x;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("\nEnter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nEnter an element to be searched: ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("\n%d is present in the array at position %d.",x,i+1);
            goto exit;
        }
        else
        {
            printf("\nElement not found.");
            goto exit;
        }
    }
    exit:
    getch();
}
