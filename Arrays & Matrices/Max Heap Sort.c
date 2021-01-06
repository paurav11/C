#include <stdio.h>
int i,n,temp,heapsize;
void max_heap(int []);
void max_heapify(int [],int);
int main()
{
    int arr[100];
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("\nEnter array elements: ");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max_heap(arr);
    for(i=n;i>1;i--)
    {
        temp=arr[1];
        arr[1]=arr[i];
        arr[i]=temp;
        heapsize=heapsize-1;
        max_heapify(arr,1);
    }
    printf("\nSorted array: ");
    for(i=1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

void max_heapify(int arr[],int i)
{
    int largest,left,right;
    left=2*i;
    right=(2*i)+1;
    if(left<=heapsize && arr[left]>arr[i])
    {
        largest=left;
    }
    else
    {
        largest=i;
    }

    if(right<=heapsize && arr[right]>arr[largest])
    {
        largest=right;
    }

    if(largest!=i)
    {
        temp=arr[largest];
        arr[largest]=arr[i];
        arr[i]=temp;
        max_heapify(arr,largest);
    }
}
void max_heap(int arr[])
{
    heapsize=n;
    for(i=n/2;i>=1;i--)
    {
        max_heapify(arr,i);
    }
}
