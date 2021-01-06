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
    printf("\nEnter no. of left rotations: ");
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {
        x=a[0];
        for(j=0;j<n;j++)
        {
           a[j]=a[j+1];
        }
        a[n-1]=x;
    }
    printf("\nArray obtained after %d left rotations: ",r);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    getch();
}
