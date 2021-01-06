#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
  char str[100];
  printf("Enter the string: ");
  gets(str);
  printf("Length of the string = %d",strlen(str));
  getch();
}
