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
  for(i=0;i<strlen(str);i++)
  {
    if(str[i]==ch)
    {
      str[i]=ch1;
    }
  }
  printf("\nString after replacing all occurences of '%c' with '%c': ",ch,ch1);
  puts(str);
  return 0;
}
