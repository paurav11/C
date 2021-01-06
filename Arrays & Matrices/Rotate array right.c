#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100],i,j,n,r,x;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("\nEnter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter no. of right rotations: ");
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {
        x=a[n-1];
        for(j=n-1;j>=0;j--)
        {
           a[j]=a[j-1];
        }
        a[0]=x;
    }
    printf("\nArray obtained after %d right rotations: ",r);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    getch();
}

