#include <stdio.h>

void insertionSort(int n){
    int arr[n],i,j,key;

    printf("\nInsert %d elements:\n",n);
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Insert complete.\n\n");

    printf("Your array looks like:\n");
    for(i=1;i<=n;i++){
        printf("%d ",arr[i]);
    }

    //Insertion Sort Algorithm
    for(j=2;j<=n;j++){
        key = arr[j];
        i = j-1;
        while(i>0 && arr[i]>key){
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1] = key;
    }

    printf("\n\nAfter sorting the array looks like:\n");
    for(i=1;i<=n;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int n;
    printf("Enter number of array elements: ");
    scanf("%d",&n);
    insertionSort(n);
    return 0;
}