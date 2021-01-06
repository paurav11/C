#include <stdio.h>
#include <string.h>
#define MAX 100
int main()
{
   char str1[MAX],str2[MAX];
   printf("Input string 1: ");
   gets(str1);
   printf("\nInput string 2: ");
   gets(str2);
   strcat(str1,str2);
   printf("\nConcatenated string : ");
   puts(str1);
   return 0;
}
