#include <stdio.h>
#include <string.h>
int main()
{
  char str[100];
  int i,min=0,ascii,freq[255];
  printf("Enter string: ");
  gets(str);
  for(i=0;i<255;i++)
  {
    freq[i]=0;
  }
  i=0;
  while(str[i]!='\0')
  {
    ascii=(int)str[i];
    freq[ascii]+=1;
    i++;
  }
  for(i=0;i<255;i++)
  {
    if(freq[i]!=0)
    {
      if(freq[min]==0 || freq[i]<freq[min])
      {
        min=i;
      }
    }
  }
  printf("\nMinimum occured character in string is '%c' = %d times",min,freq[min]);
  return 0;
}
