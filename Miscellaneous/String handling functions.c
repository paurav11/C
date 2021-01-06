#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
    char str1[100],str2[100],str3[100],str4[100];
    int i,a,b,c,d;
    printf("Enter 1st string: ");
    gets(str1);
    printf("Enter 2nd string: ");
    gets(str2);
    i=strcmp(str1,str2);
    if(i!=0)
    {
        printf("\nStrings are not equal.");
    }
    else
    {
        printf("\nStrings are equal.");
    }
    strcat(str1,str2);
    printf("\nString after concatenation: ");
    puts(str1);
    strcpy(str4,str1);
    printf("\nString after copy: ");
    puts(str4);
    a=strlen(str1);
    b=strlen(str2);
    c=strlen(str3);
    d=strlen(str4);
    printf("\nLength of string 1: %d",a);
    printf("\nLength of string 2: %d",b);
    printf("\nLength of string 3: %d",c);
    printf("\nLength of string 4: %d",d);
    _getch();
}
