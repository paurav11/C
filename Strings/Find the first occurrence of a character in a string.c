#include <stdio.h>
#include <string.h>
int main()
{
  char str[100],ch;
  int i;
  printf("Enter string: ");
  gets(str);
  printf("\nEnter a character to be searched: ");
  scanf("%c",&ch);
  for(i=0;i<strlen(str);i++)
  {
    if(str[i]==ch)
    {
      printf("\nFirst occurence of '%c' is found at index %d.",ch,i);
      break;
    }
  }
  return 0;
}
