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
    printf("\nEnter the position to delete an element: ");
    scanf("%d",&p);
    for(i=p-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    printf("\nElements of array after deleting an element: \n");
    for(i=0;i<n-1;i++)
    {
        printf("%d\n",a[i]);
    }
    getch();
}

