#include <stdio.h>
#include <string.h>
int main()
{
  char str[100];
  int i,j,l=0;
  printf("Enter string: ");
  gets(str);
  printf("\nReversed order of words in string: ");
  for(i=strlen(str)-1;i>=0;i--)
  {
    if(i>0)
    {
      l++;
      if(str[i]==' ')
      {
         for(j=i+1;j<=i+l;j++)
         {
           printf("%c",str[j]);
         }
         printf(" ");
         l=0;
      }
    }
    else
    {
      l++;
      for(j=i;j<i+l;j++)
      {
        printf("%c",str[j]);
      }
      l=0;
    }
  }
  return 0;
}
