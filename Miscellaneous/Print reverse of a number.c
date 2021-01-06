#include <stdio.h>
#include <conio.h>
void main()
{
    int num,count=0,d[50],i;
    printf("Enter a number: ");
    scanf("%d",&num);

    for(i=1;num!=0;i++)
    {
       count++;
       d[i]=num%10;
       num/=10;
     }
     printf("Reversed number: ");
     for(i=1;i<=count;i++)
     {
         printf("%d",d[i]);
     }
    _getch();
}
