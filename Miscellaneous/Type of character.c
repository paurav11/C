#include <stdio.h>
#include <ctype.h>
void main()
{
    char character;
    printf("Enter any character key from the keyboard:");
    character=getchar();
    if(isalpha(character)>0)
        printf("Character is an alphabet.");
    else if(isdigit(character)>0)
        printf("Character is a digit.");
    else
        printf("Character is not alphanumeric.");
    getch();
}
