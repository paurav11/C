#include<stdio.h>
#include<conio.h>
void main()
{
  int age;
  printf("Enter the age:");
  scanf("%d",&age);
  if(age>=18)
    printf("You are old enough to vote & eligible for a license");
  else
    printf("You are not old enough to vote & not eligible for a license");
  getch();
}