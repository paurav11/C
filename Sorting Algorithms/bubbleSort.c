#include <stdio.h>

void bubbleSort(int n){
    int arr[n],i,j,temp=0;
    int swapFlag = 0;

    printf("\nInsert %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Insert complete.\n\n");

    printf("Your array looks like:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    //Bubble Sort Algorithm
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
}

int main(){
    int n;
    printf("Enter number of array elements: ");
    scanf("%d",&n);
    bubbleSort(n);
    return 0;
}