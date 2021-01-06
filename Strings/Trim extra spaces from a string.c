#include <stdio.h>
#include <string.h>
int main()
{
  char str[100],ch;
  int i=0,j,count=0;
  printf("Enter string: ");
  gets(str);
  while(i<=strlen(str)-1)
  {
    ch=str[i];
    if(ch==' ')
    {
      j=i;
      while(str[j]==' ')
      {
        count++;
        j++;
      }
      if(count>1)
      {
        for(j=i;j<strlen(str);j++)
        {
          str[j+1]=str[j+count];
        }
      }
      else
      {
        i++;
      }
      count=0;
    }
    else
    {
      i++;
    }
  }
  printf("\nString after trimming leading white spaces: ");
  puts(str);
  return 0;
}
