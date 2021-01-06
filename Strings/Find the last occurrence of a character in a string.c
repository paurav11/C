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
  for(i=strlen(str)-1;i>=0;i--)
  {
    if(str[i]==ch)
    {
      printf("\nLast occurence of '%c' is found at index %d.",ch,i);
      break;
    }
  }
  return 0;
}
