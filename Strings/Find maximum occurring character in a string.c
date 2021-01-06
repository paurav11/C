#include <stdio.h>
#include <string.h>
int main()
{
  char str[100];
  int i,max=0,ascii,freq[255];
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
    if(freq[i]>freq[max])
    {
      max=i;
    }
  }
  printf("\nMaximum occured character in string is '%c' = %d times",max,freq[max]);
  return 0;
}
