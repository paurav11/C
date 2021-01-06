#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;
    printf("Enter a character: ");
    ch=getchar();

    ((ch>='a' && ch<='z') || ch>='A' && ch<='Z')?printf("%c is an alphabet.",ch):printf("%c is not an alphabet.",ch);
    _getch();
}

