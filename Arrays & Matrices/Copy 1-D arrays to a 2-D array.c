#include <stdio.h>
#include <conio.h>
void main()
{
    char a1[7]="Paurav";
    char a2[1][7];
    int i=0,j;
    for(j=0;a1[j]!='\0';j++)
    {
        a2[i][j]=a1[j];
    }
    a2[0][j]='\0';
    for(i=0;i<1;i++)
    {
        for(j=0;a2[i][j]!='\0';j++)
        {
            printf("%c",a2[i][j]);
        }
    }
    /*for(i=0;i<1;i++)
    {
        for(j=0;j<6;j++)
        {
            printf("%c",a2[i][j]);
        }
    }*/
    getch();
}
