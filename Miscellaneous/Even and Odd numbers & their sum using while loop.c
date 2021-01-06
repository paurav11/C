#include <stdio.h>
#include <conio.h>
void main()
{
    int i=1,n,evensum=0,oddsum=0;
    printf("Enter n: ");
    scanf("%d",&n);

    printf("Even numbers are:\n");
    while(i<=n)
    {
        if(i%2==0)
        {
           printf("%d\n",i);
           evensum+=i;
        }
        i++;
    }
    printf("\nSum of even numbers upto %d = %d\n",n,evensum);
    i=1;
    printf("\nOdd numbers are:\n");
    while(i<=n)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
            oddsum+=i;
        }
        i++;
    }
    printf("\nSum of odd numbers upto %d = %d",n,oddsum);
    _getch();
}
