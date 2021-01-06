#include <stdio.h>
#include <conio.h>
void main()
{
    int num,n,newnum;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("Enter nth bit to set (0-31): ");
    scanf("%d",&n);

    newnum=(1 << n) | num;
    printf("Bit set successfully.\n");
    printf("Number before changing bit = %d\n",num);
    printf("Number after changing bit = %d\n",newnum);
    _getch();
}
