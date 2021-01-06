#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void alphanum();
void alphabet();
void digit();
void lowercase();
void uppercase();
void printable();
void punctuation();
void space();
void printline();
char ch;
int i,choice;

int main()
{
    printline();
    printf("\n");
    printf("  WELCOME TO CHARACTER TEST\n\n");
    printf("1.Is character an alphanumeric?\n2.Is character an alphabet?\n3.Is character a digit?\n4.Is character a lowercase?\n5.Is character an uppercase?\n6.Is character printable?\n7.Is character a punctuation mark?\n8.Is character a space?\n");
    printline();
    printf("\n");
    printf("Enter a character:");
    ch=getchar();

    while(choice!=9)
    {
        printf("Enter the choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:alphanum();
                   break;
            case 2:alphabet();
                   break;
            case 3:digit();
                   break;
            case 4:lowercase();
                   break;
            case 5:uppercase();
                   break;
            case 6:printable();
                   break;
            case 7:punctuation();
                   break;
            case 8:space();
                   break;
            case 9:return 0;
            default:printf("Invalid choice.\n");
                    break;
        }
    }
}

void printline()
{
   for(i=0;i<=35;i++)
    printf("=");
}

void alphanum()
{
    if(isalnum(ch)>0)
        printf("Character is an alphanumeric.\n");
    else
        printf("Character is not an alphanumeric.\n");
}

void alphabet()
{
    if(isalpha(ch)>0)
        printf("Character is an alphabet.\n");
    else
        printf("Character is not an alphabet.\n");
}

void digit()
{
    if(isdigit(ch)>0)
        printf("Character is a digit.\n");
    else
        printf("Character is not a digit.\n");
}

void lowercase()
{
    if(islower(ch)>0)
        printf("Character is a lowercase.\n");
    else
        printf("Character is not a lowercase.\n");
}

void uppercase()
{
    if(isupper(ch)>0)
        printf("Character is an uppercase.\n");
    else
        printf("Character is not an uppercase.\n");
}

void printable()
{
    if(isprint(ch)>0)
        printf("Character is printable.\n");
    else
        printf("Character is not printable.\n");
}

void punctuation()
{
    if(ispunct(ch)>0)
        printf("Character is a punctuation mark.\n");
    else
        printf("Character is not a punctuation mark.\n");
}

void space()
{
    if(isspace(ch)>0)
        printf("Character is a space.\n");
    else
        printf("Character is not a space.\n");
}
