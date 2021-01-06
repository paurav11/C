#include <stdio.h>
int main()
{
    int a[100],i,j,n,key;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("\nEnter element no. 1: ");
    scanf("%d",&a[0]);

    for(i=1;i<n;i++)
    {
        printf("\nEnter element no. %d: ",i+1);
        scanf("%d",&a[i]);
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }

    printf("\nThe sorted array is (ascending order): ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}



