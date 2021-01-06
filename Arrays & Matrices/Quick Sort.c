#include <stdio.h>
void quicksort(int [],int,int);
int partition(int [],int,int);
int i,j,p,q,r,n,arr[100];
int main()
{
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("\nEnter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    p=0;
    r=n-1;
    quicksort(arr,p,r);
    printf("\nSorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
int partition(int arr[],int p,int r)
{
    int x,temp;
    x=arr[r];
    i=p-1;
    for(j=p;j<r;j++)
    {
        if(arr[j]<=x)
        {
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    temp=arr[i+1];
    arr[i+1]=arr[r];
    arr[r]=temp;
    return i+1;
}
void quicksort(int arr[],int p,int r)
{
    if(p<r)
    {
        q=partition(arr,p,r);
        quicksort(arr,p,q-1);
        quicksort(arr,q+1,r);
    }
}
