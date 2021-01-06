#include <stdio.h>
#include <conio.h>
void main()
{
    int num,n,bitstatus;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("Enter nth bit to check (0-31): ");
    scanf("%d",&n);

    bitstatus=(num >> n)&1;

    printf("nth bit of %d = %d",num,bitstatus);
    _getch();
}
