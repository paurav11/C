#include <stdio.h>
#define MAX 100
int main()
{
  char str[MAX];
  int i;
  printf("Enter string: ");
  gets(str);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]>='A' && str[i]<='Z')
    {
       str[i]=str[i]+32;
    }
  }
  printf("\nToLower string: ");
  puts(str);
  return 0;
}
