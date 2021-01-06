#include <stdio.h>
#include <string.h>
#define MAX 100
int main()
{
   char str1[MAX],str2[MAX];
   int i,flag=0;
   printf("Input string 1: ");
   gets(str1);
   printf("\nInput string 2: ");
   gets(str2);
   if(strlen(str1)==strlen(str2))
   {
     for(i=0;i<strlen(str1);i++)
     {
        if(str1[i]==str2[i])
        {
          flag=1;
        }
        else
        {
          flag=0;
          break;
        }
     }
   }
   else
   {
     flag=0;
   }
   if(flag==1)
   {
     printf("\nStrings are equal.");
   }
   else
   {
     printf("\nStrings are not equal.");
   }
   return 0;
}
