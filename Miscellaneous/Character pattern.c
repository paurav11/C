#include <stdio.h>
#include <conio.h>
void main()
{
    int c,d;
    char str[]="CProgramming";
    printf("\n");
    for(c=0;c<=11;c++)
    {
        d=c+1;
        printf("%-12.*s\n",d,str);
    }
    for(c=11;c>=0;c--)
    {
        d=c+1;
        printf("%-12.*s\n",d,str);
    }
    _getch();
}
