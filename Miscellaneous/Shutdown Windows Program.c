#include <stdio.h>
#include <stdlib.h>
int main()
{
  char ch;
  printf("Do you want to shutdown windows? (y/n): ");
  scanf("%c",&ch);
  if(ch=='y' || ch=='Y')
  {
    system("C:\\Windows\\System32\\shutdown /s");
  }
  return 0;
}
