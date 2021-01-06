#include <stdio.h>
#include <string.h>
int main()
{
  char str[100],word[20],temp[20],ch;
  int i,j=0,k=0,count=0,wcount=0,flag=0,flag1,position[20];
  printf("Enter string: ");
  gets(str);
  printf("\nEnter word to be searched: ");
  gets(word);
  for(i=0;i<strlen(str);i++)
  {
    ch=str[i];
    temp[j]=ch;
    if(ch==' ' || i==strlen(str)-1)
    {
      count++;
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
        position[wcount]=count;
        wcount++;
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
    printf("\n'%s' is occured %d time(s) at position ",word,wcount);
    for(i=0;i<wcount;i++)
    {
      if(i==wcount-1)
      {
        printf("%d.",position[i]);
      }
      else
      {
        printf("%d, ",position[i]);
      }
    }
  }
  else
  {
    printf("\n'%s' is not found.",word);
  }
  return 0;
}
