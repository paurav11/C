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
   if(strcmp(str1,str2)==0)
   {
     printf("\nStrings are equal.");
   }
   else
   {
     printf("\nStrings are not equal.");
   }
   return 0;
}
