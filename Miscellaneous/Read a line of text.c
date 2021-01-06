#include <stdio.h>
#include <conio.h>
void main()
{
    char line[100],ch;
    int c=0;
    printf("Enter text: ");
    do
    {
        ch=getchar();
        line[c]=ch;
        c++;
    }while(ch!='\n');
    c=c-1;
    line[c]='\0';
    printf("\n%s",line);
    _getch();
}
