#include <stdio.h>
#include <conio.h>
void main()
{
    char str1[100],str2[100];
    int i;
    printf("Enter a string: ");
    gets(str1);
    for(i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("%s\n",str2);
    printf("Number of characters copied = %d",i);
    _getch();
}
