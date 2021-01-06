#include <stdio.h>
#include <string.h>
int main()
{
  char str[100],ch,ch1;
  int i;
  printf("Enter string: ");
  gets(str);
  printf("\nEnter a character to be replaced: ");
  scanf("%c",&ch);
  getchar();
  printf("\nEnter a character to replace '%c': ",ch);
  scanf("%c",&ch1);
  for(i=strlen(str)-1;i>=0;i--)
  {
    if(str[i]==ch)
    {
      str[i]=ch1;
      break;
    }
  }
  printf("\nString after replacing last occurence of '%c' with '%c': ",ch,ch1);
  puts(str);
  return 0;
}
