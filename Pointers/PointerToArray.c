#include <stdio.h>

int main(){
    int a[5] = {1,2,3,4,5};
    int *p = &a[0]; //Assigning starting address of an array to a pointer variable
    printf("Address of a[0] in decimal = %u",&a[0]);
    printf("\nValue of pointer variable p = %d",p);
    printf("\nValue pointed by p = %d",*p);
    printf("\n\nAddress of a[1] in decimal = %u",&a[1]);
    printf("\nValue of pointer variable p = %d",p+1);
    printf("\nValue pointed by p = %d",*(p+1));
    printf("\n\nAddress of a[2] in decimal = %u",&a[2]);
    printf("\nValue of pointer variable p = %d",p+2);
    printf("\nValue pointed by p = %d",*(p+2));
    printf("\n\nAddress of a[3] in decimal = %u",&a[3]);
    printf("\nValue of pointer variable p = %d",p+3);
    printf("\nValue pointed by p = %d",*(p+3));
    printf("\n\nAddress of a[4] in decimal = %u",&a[4]);
    printf("\nValue of pointer variable p = %d",p+4);
    printf("\nValue pointed by p = %d",*(p+4));
    return 0;
}