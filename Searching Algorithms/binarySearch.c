#include <stdio.h>

int binarySearch(int arr[],int x,int l,int m,int r){
    while (l<=r){
        if(arr[m] == x){
            return m+1;
        }
        else if(arr[m] > x){
            return binarySearch(arr,x,l,(l+(m-1))/2,m-1);
        }
        else if(arr[m] < x){
            return binarySearch(arr,x,m+1,((m+1)+r)/2,r);
        }
    }
    return -1;
}

int main(){
    int n,m,x;
    printf("Enter number of array elements: ");
    scanf("%d",&n);
    int l=0,r=n-1;

    if(r>=1){
        int arr[n],i,j;
        int temp=0,swapFlag=0;
        printf("\nInsert %d elements:\n",n);
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        printf("Insert complete.\n");

        printf("\nYour array looks like:\n");
        for(i=0;i<n;i++){
            printf("%d ",arr[i]);
        }

        //Remember binary search only works for sorted arrays.

        //Applying bubble sort to the array
        for(i=0;i<n-1;i++){
            swapFlag = 0;
            for(j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    swapFlag = 1;
                    //Swapping unordered pairs
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
            //Condition to reduce number of passes & comparisons
            if(swapFlag == 0){
                break;
            }
        }

        printf("\n\nAfter sorting the array looks like:\n");
        for(i=0;i<n;i++){
            printf("%d ",arr[i]);
        }

        printf("\n\nEnter an element that you want to find: ");
        scanf("%d",&x);

        m = (l+r)/2;
        int result = binarySearch(arr,x,l,m,r);

        if(result != -1){
            printf("\nYes! Element %d is found at position %d.",x,result);
        }
        else{
            printf("\nOops! Element %d is not found.",x);
        }
    }
    else{
        printf("Binary search is not required as array has only 1 element.");
    }
    return 0;
}