#include <stdio.h>

void linearSearch(int n){
    int arr[n],i,x;
    int isFound = 0,elementPosition = 0;

    printf("\nInsert %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Insert complete.\n");

    printf("\nYour array looks like:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    printf("\n\nEnter an element that you want to find: ");
    scanf("%d",&x);

    for(i=0;i<n;i++){
        if(arr[i] == x){
            isFound = 1;
            elementPosition = i+1;
            break;
        }
    }

    if(isFound == 1){
        printf("\nYes! Element %d is found at position %d.",x,elementPosition);
    }
    else{
        printf("\nOops! Element %d is not found.",x);
    }
}

int main(){
    int n;
    printf("Enter number of array elements: ");
    scanf("%d",&n);
    linearSearch(n);
    return 0;
}