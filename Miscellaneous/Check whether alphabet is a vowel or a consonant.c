#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;
    printf("Enter an alphabet: ");
    ch=getchar();

    if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
    {
        printf("Alphabet '%c' is a vowel.",ch);
    }
    else
    {
        printf("Alphabet '%c' is a consonant.",ch);
    }
    _getch();
}
