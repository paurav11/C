#include <stdio.h>
#include <conio.h>
void main()
{
    char str[100];
    int i,j;
    printf("Enter a string with special characters: ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        while(!(str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            for(j=i;str[j]!='\0';j++)
            {
                str[j]=str[j+1];
            }
            str[j]='\0';
        }
    }
    printf("Output string: ");
    puts(str);
    _getch();
}
