#include <stdio.h>
#include <conio.h>
void main()
{
    int n,num,rev=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    num=n;

    while(n!=0)
    {
       rev=(rev*10)+(n%10);
       n/=10;
    }

    if(rev==num)
    {
        printf("%d is palindrome.",num);
    }
    else
    {
        printf("%d is not palindrome.",num);
    }
     getch();
}

