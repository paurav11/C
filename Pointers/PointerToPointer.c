#include <stdio.h>

int main(){
    int a = 10;
    int *p;
    int **pp;

    p=&a; // Pointer p is pointing to the address of a
    pp=&p; // Pointer pp is a double pointer pointing to the address of pointer p

    printf("Value of a = %d",a);
    printf("\nAddress of a = %u",&a);
    printf("\nValue of pointer p = %d",p);
    printf("\nValue pointed by pointer p = %d",*p);
    printf("\nAddress of pointer p = %u",&p);
    printf("\nValue of double pointer pp = %d",pp);
    printf("\nValue pointed by double pointer pp = %d",**pp);
    return 0;
}