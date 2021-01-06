#include <stdio.h>
#include <string.h>
int main()
{
  char str[100],ch;
  int i,count=0;
  printf("Enter string: ");
  gets(str);
  printf("\nEnter a character to be searched: ");
  scanf("%c",&ch);
  printf("\n'%c' is found at index: ",ch);
  for(i=0;i<strlen(str);i++)
  {
    if(str[i]==ch)
    {
      count++;
      printf("%d, ",i);
    }
  }
  printf("\n'%c' occured %d times in your string.",ch,count);
  return 0;
}
