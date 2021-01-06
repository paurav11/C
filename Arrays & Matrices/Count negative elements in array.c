#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100],i,n,negcount=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("\nEnter the elements of array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
            negcount++;
    }
    printf("\nNumber of negative elements in array = %d",negcount);
    getch();
}
