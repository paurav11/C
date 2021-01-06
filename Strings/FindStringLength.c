#include <stdio.h>
#include <conio.h>
void main()
{
  char str[100];
  int count=0,i=0;
  printf("Enter the string: ");
  gets(str);
  while(str[i]!='\0')
  {
    count++;
    i++;
  }
  printf("Length of the string = %d",count);
  getch();
}
