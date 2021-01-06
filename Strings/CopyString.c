#include <stdio.h>
#include <conio.h>
#define MAX 100
void main()
{
   char str1[MAX],str2[MAX];
   int i;
   printf("Input string : ");
   gets(str1);
   for(i=0;str1[i]!='\0';i++)
   {
      str2[i]=str1[i];
   }
   str2[i]='\0';
   printf("\nCopied string : ");
   puts(str2);
   getch();
}
