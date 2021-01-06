#include <stdio.h>

void selectionSort(int n){
    int arr[n],i,j,minIndex;

    printf("\nInsert %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Insert complete.\n\n");

    printf("Your array looks like:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    //Selection Sort Algorithm
    for(i=0;i<n-1;i++){
        minIndex = i;
        for(j=i+1;j<n;j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        //Swapping elements
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    printf("\n\nAfter sorting your array looks like:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int n;
    printf("Enter number of array elements: ");
    scanf("%d",&n);
    selectionSort(n);
    return 0;
}