#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100],i,n,oddcount=0,evencount=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("\nEnter the elements of array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            evencount++;
        else
            oddcount++;
    }
    printf("\nNumber of odd elements in array = %d",oddcount);
    printf("\nNumber of even elements in array = %d",evencount);
    getch();
}
