#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100],i,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("\nEnter array elements: ");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nReversed array: ");
    for(i=n;i>0;i--)
    {
        printf("%d ",a[i]);
    }
    getch();
}
