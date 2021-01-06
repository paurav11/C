#include <stdio.h>
#include <string.h>
int main()
{
  char str[100];
  int i;
  printf("Enter string: ");
  gets(str);
  printf("\nReversed string: ");
  for(i=strlen(str);i>=0;i--)
  {
     printf("%c",str[i]);
  }
  return 0;
}
