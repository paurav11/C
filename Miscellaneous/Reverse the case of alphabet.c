#include <stdio.h>
#include <ctype.h>
void main()
{
    char alphabet;
    printf("Enter a character:");
    putchar('\n');
    alphabet=getchar();

    if(islower(alphabet)>0)
        putchar(toupper(alphabet));
    else
        putchar(tolower(alphabet));
    getch();
}
