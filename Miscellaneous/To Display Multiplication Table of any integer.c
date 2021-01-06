#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    clrscr();
    printf("Enter an integer to find multiplication table:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}