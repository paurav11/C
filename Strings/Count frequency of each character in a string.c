#include <stdio.h>
#include <string.h>
int main()
{
  char str[100];
  int i,ascii,freq[255];
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
  printf("\nFrequency of each character in string: ");
  for(i=0;i<255;i++)
  {
     if(freq[i]!=0)
     {
       printf("\n'%c' = %d",i,freq[i]);
     }
  }
  return 0;
}
