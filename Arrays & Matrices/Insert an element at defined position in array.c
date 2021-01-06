#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100],i,n,p;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("\nEnter the elements of array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the position to insert an element: ");
    scanf("%d",&p);
    for(i=n;i>=p;i--)
    {
        a[i+1]=a[i];
    }
    printf("\nEnter an element at position %d: ",p);
    scanf("%d",&a[p]);
    printf("\nElements of array after inserting an element: \n");
    for(i=0;i<=n;i++)
    {
        printf("%d\n",a[i]);
    }
    getch();
}
