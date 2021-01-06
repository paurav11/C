#include <stdio.h>
#include <conio.h>
void main()
{
    float SP,CP,profit,loss;
    printf("Enter the cost price and selling price of a product: ");
    scanf("%f%f",&CP,&SP);

    if(SP>CP)
    {
        profit=SP-CP;
        printf("There is a profit of Rs. %.2f.",profit);
    }
    else
    {
        loss=CP-SP;
        printf("There is a loss Rs. %.2f.",loss);
    }
    _getch();
}
