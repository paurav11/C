#include <stdio.h>
#include <conio.h>
int largest(int a[],int);
void main()
{
    int n,i,a[100];
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter the elements in array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The largest element of array = %d",largest(a,n));
    _getch();
}

int largest(int a[],int n)
{
    int i,max;
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    return max;
}
