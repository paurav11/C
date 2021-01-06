#include <stdio.h>
void main()
{
    char charVal;
    unsigned uCharVal;
    short shortVal;
    unsigned short uShortVal;
    int intVal;
    unsigned int uIntVal;
    long longVal;
    unsigned long uLongVal;
    long long longLongVal;
    unsigned long long uLongLongVal;
    float floatVal;
    double doubleVal;
    long double longDoubleVal;

    printf("Enter a char value: ");
    charVal=getchar();
    getchar();

    printf("\nEnter an unsigned char value: ");
    uCharVal=getchar();
    getchar();

    printf("\nEnter a short value: ");
    scanf("%hi",&shortVal);

    printf("\nEnter an unsigned short value: ");
    scanf("%hu",&uShortVal);

    printf("\nEnter an integer value: ");
    scanf("%d",&intVal);

    printf("\nEnter an unsigned integer value: ");
    scanf("%lu",&uIntVal);

    printf("\nEnter a long value: ");
    scanf("%ld",&longVal);

    printf("\nEnter an unsigned long value: ");
    scanf("%lu",&uLongVal);

    printf("\nEnter a long long value: ");
    scanf("%lld",&longLongVal);

    printf("\nEnter an unsigned long long value: ");
    scanf("%llu",&uLongLongVal);

    printf("\nEnter a float value: ");
    scanf("%f",&floatVal);

    printf("\nEnter a double value: ");
    scanf("%lf",&doubleVal);

    printf("\nEnter a long double value: ");
    scanf("%Lf",&longDoubleVal);

    printf("\nYou entered a char value: %c \n",charVal);
    printf("You entered an unsigned char value: %c \n\n",uCharVal);
    printf("You entered a short value: %hi \n",shortVal);
    printf("You entered an unsigned short value: %hu \n\n",uShortVal);
    printf("You entered a integer value: %d \n",intVal);
    printf("You entered an unsigned integer value: %lu \n\n",uIntVal);
    printf("You entered a long value: %ld \n",longVal);
    printf("You entered an unsigned long value: %lu \n\n",uLongVal);
    printf("You entered a long long value: %lld \n",longLongVal);
    printf("You entered an unsigned long long value: %llu \n\n",uLongLongVal);
    printf("You entered a float value: %f \n",floatVal);
    printf("You entered a double value: %lf \n",doubleVal);
    printf("You entered a long double value: %Lf \n",longDoubleVal);
    getch();
}
