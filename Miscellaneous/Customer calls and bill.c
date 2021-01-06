#include <stdio.h>
void printline();
int i;
void main()
{
    int n;
    float rent,charge,cost;
    printf("Enter rent/month:");
    scanf("%f",&rent);
    printf("Enter number of calls in the month:");
    scanf("%d",&n);

    if(n>100)
    {
        printf("Enter charge for each call:");
        scanf("%f",&charge);
        cost=rent+(n*charge);
    }
    else
    {
        cost=rent;
    }

    printf("\n");
    printline();
    printf("\n\t\tMONTHLY BILL\n\n");
    printf("Amount Due = %.2f\nRent per month = %.2f\nTotal calls in the month= %d\nCharge for each call(for calls > 100) = %.2f\n",cost,rent,n,charge);
    printline();
    getch();
}

void printline()
{
    for(i=0;i<=45;i++)
        printf("=");
}
