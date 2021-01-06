#include <stdio.h>
#include <conio.h>
void main()
{
    long int num;
    int i,temp,count=0,d[50];
    printf("Enter a number: ");
    scanf("%lld",&num);

    while(num!=0)
    {
        count++;
        d[count]=num%10;
        num/=10;
    }
    printf("First digit = %d\n",d[count]);
    printf("Last digit = %d",d[1]);
    temp=d[1];
    d[1]=d[count];
    d[count]=temp;
    printf("\nAfter swapping first and last digit we get new number as: ");
    for(i=count;i>=1;i--)
    {
        printf("%d",d[i]);
    }
    _getch();
}



