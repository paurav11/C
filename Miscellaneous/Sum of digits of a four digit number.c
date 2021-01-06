#include <stdio.h>
void main()
{
    int n,n1,n2,n3,d1,d2,d3,d4,s;
    printf("Enter a four digit number:");
    scanf("%d",&n);
    n1=n/10;
    n2=n1/10;
    n3=n2/10;
    d1=n%10;
    d2=n1%10;
    d3=n2%10;
    d4=n3%10;
    s=d1+d2+d3+d4;
    printf("Sum of digits = %d",s);
    getch();
}
