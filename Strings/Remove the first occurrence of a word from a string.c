#include <stdio.h>
#include <string.h>
int main()
{
  char str[100],word[20],temp[20],ch;
  int i,j=0,k=0,flag=0;
  printf("Enter string: ");
  gets(str);
  printf("\nEnter word to be removed: ");
  gets(word);
  for(i=0;i<strlen(str);i++)
  {
    ch=str[i];
    temp[j]=ch;
    if(ch==' ' || i==strlen(str)-1)
    {
      temp[++j]='\0';
      while(word[k]!='\0')
      {
        if(word[k]==temp[k])
        {
          flag=1;
        }
        else
        {
          flag=0;
          break;
        }
        k++;
      }
      if(flag==1)
      {
        if(i==strlen(str)-1)
        {
          str[i-strlen(word)]=str[i+1];
        }
        else
        {
          for(k=i;k<strlen(str);k++)
          {
            str[k-strlen(word)]=str[k+1];
          }
        }
        break;
      }
      j=0;
      k=0;
    }
    else
    {
      j++;
    }
  }

  if(flag==1)
  {
    printf("\nString after removing first occurence of '%s': ",word);
    puts(str);
  }
  else
  {
    printf("\n'%s' is not found.",word);
  }
  return 0;
}
