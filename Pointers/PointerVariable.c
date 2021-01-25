#include <stdio.h>

int main(){
    int number = 11;
    int *p;
    p = &number; //Pointer variable p stores the address of variable number
    printf("Address of pointer variable p in decimal = %u",&p);
    printf("\nAddress of number variable in decimal = %u",&number);
    printf("\nValue of pointer variable p = %d",p);
    printf("\n\nAddress of pointer variable p in hexadecimal = %x",&p);
    printf("\nAddress of number variable in hexadecimal = %x",&number);
    printf("\nValue of pointer variable p = %x",p);
    printf("\n\nValue of number variable = %d",number);
    printf("\nValue pointed by p variable = %d",*p);
    return 0;
}