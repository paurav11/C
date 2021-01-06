#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;
    printf("Enter an alphabet: ");
    ch=getchar();

    switch(ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U': printf("Entered alphabet is a vowel.");
                  break;
        default: printf("Entered alphabet is a consonant.");
                 break;
    }
    _getch();
}
