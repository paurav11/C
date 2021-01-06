#include <stdio.h>
#include <string.h>
int main()
{
  char str[100],word[20],temp[20],ch;
  int i,j=0,k=0,flag=0,flag1,x;
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
        flag1=1;
        x=i;
      }
      j=0;
      k=0;
    }
    else
    {
      j++;
    }
  }

  if(flag1==1)
  {
    printf("\nString after removing last occurence of '%s': ",word);
    if(x==strlen(str)-1)
    {
      str[x-strlen(word)]=str[x+1];
    }
    else
    {
      for(k=x;k<strlen(str);k++)
      {
        str[k-strlen(word)]=str[k+1];
      }
    }
    puts(str);
  }
  else
  {
    printf("\n'%s' is not found.",word);
  }
  return 0;
}
