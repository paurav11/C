#include <stdio.h>
void main()
{
    int income,percentage;
    printf("Enter annual income of your family from all sources:");
    scanf("%d",&income);
    printf("Enter percentage of the student:");
    scanf("%d",&percentage);

    if(income<600000 && percentage>65)
        printf("Congratulations! You are eligible for scholarship scheme.");
    else
        printf("Sorry! You are not eligible for scholarship scheme.");
    getch();
}
