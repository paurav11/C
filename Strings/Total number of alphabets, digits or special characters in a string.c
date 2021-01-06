#include <stdio.h>
int main()
{
  char str[100];
  int i,alphabets=0,digits=0,special_char=0;
  printf("Enter string: ");
  gets(str);
  for(i=0;str[i]!='\0';i++)
  {
    if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
    {
      alphabets++;
    }
    else if(str[i]>='0' && str[i]<='9')
    {
      digits++;
    }
    else if(str[i]!=' ')
    {
      special_char++;
    }
  }
  printf("\nNumber of alphabets = %d",alphabets);
  printf("\nNumber of digits = %d",digits);
  printf("\nNumber of special characters = %d",special_char);
  return 0;
}
