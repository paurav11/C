#include <stdio.h>
#include <conio.h>
void main()
{
    int num1,num2,min,hcf=1,i;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);

    min=(num1<num2)?num1:num2;

    for(i=1;i<=min;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf=i;
        }
    }
    printf("HCF of %d & %d = %d",num1,num2,hcf);
    _getch();
}
