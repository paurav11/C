#include <stdio.h>
#include <string.h>
#include <conio.h>
#define MAX 100
void main()
{
   char str1[MAX],str2[MAX];
   int i;
   printf("Input string : ");
   gets(str1);
   strcpy(str2,str1);
   printf("\nCopied string : ");
   puts(str2);
   getch();
}
