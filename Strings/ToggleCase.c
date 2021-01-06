#include <stdio.h>
#define MAX 100
void togglecase(char []);
int i;
int main()
{
  char str[MAX];
  printf("Enter string: ");
  gets(str);
  togglecase(str);
  printf("\nToUpper string: ");
  puts(str);
  return 0;
}

void togglecase(char str [])
{
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]>='a' && str[i]<='z')
    {
      str[i]=str[i]-32;
    }
    else if(str[i]>='A' && str[i]<='Z')
    {
      str[i]=str[i]+32;
    }
  }
}
