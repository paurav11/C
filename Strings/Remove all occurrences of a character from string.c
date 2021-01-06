#include <stdio.h>
#include <string.h>
int main()
{
  char str[100],ch;
  int i,j;
  printf("Enter string: ");
  gets(str);
  printf("\nEnter a character to be removed: ");
  scanf("%c",&ch);
  for(i=0;i<strlen(str);i++)
  {
    if(str[i]==ch)
    {
      for(j=i;j<strlen(str);j++)
      {
        str[j]=str[j+1];
      }
      i--;
    }
  }
  printf("\nString after removing all occurences of '%c': ",ch);
  puts(str);
  return 0;
}
