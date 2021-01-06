#include <stdio.h>
int main()
{
    int a[100],i,j,n,temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("\nEnter element no. 1: ");
    scanf("%d",&a[0]);

    for(i=1;i<n;i++)
    {
        printf("\nEnter element no. %d: ",i+1);
        scanf("%d",&a[i]);
        for(j=0;j<i;j++)
        {
           if(a[i]<a[j])
           {
               temp=a[j];
               a[j]=a[i];
               a[i]=temp;
           }
        }
    }

    printf("\nThe sorted array is (ascending order): ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}


