#include <stdio.h>
void main()
{
    char answer;
    printf("Is your age 18 or above? : ");
    answer=getchar();
    if(answer=='Y' || answer=='y')
        printf("You are an adult.");
    else
        printf("You are not an adult.");
    getch();
}
