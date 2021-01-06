#include <stdio.h>
#include <conio.h>
char operator;
int a,b,c;
void main()
{
   printf("\tSIMPLE CALCULATOR\n\n");
   printf("+.Addition\n-.Subtraction\n*.Multiplication\n/.Division\n");
   printf("Enter the operation to be performed on the operands:");
   scanf("%c",&operator);
   printf("Enter two operands:");
   scanf("%d%d",&a,&b);

   switch(operator)
   {
       case '+': c=a+b;
                 printf("Sum of %d & %d = %d",a,b,c);
                 break;
       case '-': c=a-b;
                 printf("Difference of %d & %d = %d",a,b,c);
                 break;
       case '*': c=a*b;
                 printf("Product of %d & %d = %d",a,b,c);
                 break;
       case '/': c=a/b;
                 printf("Quotient of %d & %d = %d",a,b,c);
                 break;
       default: printf("Error! Operator is incorrect.");
   }
   getch();
}
