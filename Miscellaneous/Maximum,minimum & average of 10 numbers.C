#include<stdio.h>
#include<conio.h>
void main()
{
  int i,num;
  int sum,max,min;
  clrscr();
  printf("Enter Number 1:");
  scanf("%d",&num);
  min=num; max=num; sum=num;
  for(i=2;i<11;i++)
   {
    printf("Enter number %d:",i);
    scanf("%d",&num);
    sum=sum+num;
    if(num>max)max=num;
    if(num<min)min=num;
   }
   printf("\n Maximum number is %d",max);
   printf("\n Minimum number is %d",min);
   printf("\n Average of numbers is %0.2f",(float)sum/10);
   getch();
}