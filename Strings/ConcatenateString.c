#include <stdio.h>
#include <string.h>
#define MAX 100
int main()
{
   char str1[MAX],str2[MAX];
   int i,j=0;
   printf("Input string 1: ");
   gets(str1);
   printf("\nInput string 2: ");
   gets(str2);
   for(i=strlen(str1);str2[j]!='\0';i++)
   {
     str1[i]=str2[j];
     j++;
   }
   str1[i]='\0';
   printf("\nConcatenated string : ");
   puts(str1);
   return 0;
}
