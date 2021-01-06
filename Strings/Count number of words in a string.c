#include <stdio.h>
int main()
{
  char str[100],ch;
  int i,words=0;
  printf("Enter string: ");
  gets(str);
  for(i=0;str[i]!='\0';i++)
  {
     if(str[i]==' ' || str[i]=='\n' || str[i]=='.' || str[i]=='!' || str[i]=='?')
     {
       words++;
     }
  }
  printf("\nNumber of words = %d",words);
  return 0;
}
