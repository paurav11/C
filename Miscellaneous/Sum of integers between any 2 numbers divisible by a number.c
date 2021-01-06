#include <stdio.h>
#include <conio.h>
int a,b,i,n,count=0,sum=0;
void main()
{
    printf("Enter two integers:");
    scanf("%d%d",&a,&b);
    printf("Enter an integer to check divisibility of integers between %d & %d:",a,b);
    scanf("%d",&n);

    for(i=a+1;i<b;i++)
    {
        if(i%n==0)
        {
            count++;
            sum=sum+i;
        }
    }
    printf("Total no. of integers between %d & %d divisible by %d = %d\n",a,b,n,count);
    printf("Sum of integers between %d & %d divisible by %d = %d",a,b,n,sum);
    getch();
}
