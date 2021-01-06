#include <stdio.h>
#include <string.h>
#define MAX 100
int main()
{
  char str[MAX];
  printf("Enter string: ");
  gets(str);
  strupr(str);
  printf("\nToUpper string: ");
  puts(str);
  return 0;
}
