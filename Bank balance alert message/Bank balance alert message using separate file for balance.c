#include <stdio.h>
#include "b1.c"
int balance;
void main()
{
    printf("Your present balance = %d\n",balance);
    if (balance==0)
        printf("We are sorry to tell you that we are temporarily closing your bank A/c due to zero balance.\nA/c will reopen only when you will be fulfilling the minimum balance requirement.");
    else if (balance<=3000 && balance!=0)
        printf("Dear A/c holder, your balance is below the required balance limit.\nPlease take this into your notice and maintain the minimum balance in your A/c.");
    getch();
}
