#include <stdio.h>
int main()
{
  char str[100],ch;
  int i,vowels=0,consonants=0;
  printf("Enter string: ");
  gets(str);
  for(i=0;str[i]!='\0';i++)
  {
    ch=str[i];
    if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
    {
      vowels++;
    }
    else if(ch!=' ')
    {
      consonants++;
    }
  }
  printf("\nNumber of vowels = %d",vowels);
  printf("\nNumber of consonants = %d",consonants);
  return 0;
}
