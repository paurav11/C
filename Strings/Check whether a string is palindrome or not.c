#include <stdio.h>
#include <string.h>
int main()
{
  char str[100];
  int i,l,flag=0;
  printf("Enter string: ");
  gets(str);
  l=strlen(str);
  for(i=0;i<l;i++)
  {
    if(str[i]==str[l-i-1])
    {
      flag=1;
    }
    else
    {
      flag=0;
      break;
    }
  }

  if(flag==1)
  {
    printf("\nString is a palindrome.");
  }
  else
  {
    printf("\nString is not a palindrome.");
  }
}
