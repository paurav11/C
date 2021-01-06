#include <stdio.h>
#include <conio.h>
int i,j,k;
void merge(int [],int,int,int);
void mergesort(int [],int,int);
int main()
{
    int arr[100],n,l,r;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("\nEnter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    l=0;
    r=n-1;
    mergesort(arr,l,r);
    printf("\nSorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

void merge(int arr[],int l,int mid,int r)
{
    int i=l,j=mid+1,index=l,temp[100];
    while((i<=mid) && (j<=r))
    {
        if(arr[i]<arr[j])
        {
            temp[index]=arr[i];
            i++;
        }
        else
        {
            temp[index]=arr[j];
            j++;
        }
        index++;
    }

    if(i>mid)
    {
        while(j<=r)
        {
            temp[index]=arr[j];
            j++;
            index++;
        }
    }
    else
    {
        while(i<=mid)
        {
            temp[index]=arr[i];
            i++;
            index++;
        }
    }

    for(k=l;k<index;k++)
    {
        arr[k]=temp[k];
    }
}

void mergesort(int arr[],int l,int r)
{
    int mid;
    if(l<r)
    {
        mid=(l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}
