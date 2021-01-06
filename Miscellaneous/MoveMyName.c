#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

void main()
{
    int x=30,y=10;
    char ch;
    gotoxy(x,y);
    printf("Paurav");
    while(1)
    {
        ch=getch();
        switch(ch)
        {
        case 'a':
            x--;
            break;

        case 'd':
            x++;
            break;

        case 'w':
            y--;
            break;

        case 'z':
            y++;
            break;

        case 27:
            exit(0);
        }
        system("cls");
        gotoxy(x,y);
        printf("Paurav");
    }
    getch();
}
