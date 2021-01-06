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
    if(str[i]>='a' && str[i]<='z')
    {
       str[i]=str[i]-32;
    }
  }
  printf("\nToUpper string: ");
  puts(str);
  return 0;
}
