#include <stdio.h>
#include <string.h>
int main()
{
  char str[100],ch;
  int i,j,count=0;
  printf("Enter string: ");
  gets(str);
  i=strlen(str)-1;
  while(i>=0)
  {
    ch=str[i];
    if(ch==' ')
    {
      j=i;
      while(str[j]==' ')
      {
        count++;
        j--;
      }
      for(j=i;j<strlen(str);j++)
      {
        str[(j-count)+1]=str[j+1];
      }
      break;
    }
    else
    {
      i--;
    }
  }
  printf("\nString after trimming trailing white spaces: ");
  puts(str);
  return 0;
}
