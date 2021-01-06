#include <stdio.h>
#include <conio.h>
int hcf(int,int);
void main()
{
    int n1,n2;
    printf("Enter two positive numbers: ");
    scanf("%d%d",&n1,&n2);
    printf("HCF of %d & %d = %d",n1,n2,hcf(n1,n2));
    _getch();
}

int hcf(int n1,int n2)
{
    if(n2!=0)
    {
        return hcf(n2,n1%n2);
    }
    else
    {
        return n1;
    }
}
