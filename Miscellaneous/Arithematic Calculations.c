#include <stdio.h>
void main()
{
    int a,b,sum,diff,multi,div,modulo;
    printf("Enter any two numbers:");
    scanf("%d%d",&a,&b);

    sum=a+b;
    diff=a-b;
    multi=a*b;
    div=a/b;
    modulo=a%b;

    printf("\n");
    printf("Sum of %d & %d = %d\n",a,b,sum);
    printf("\n");
    printf("Difference of %d & %d = %d\n",a,b,diff);
    printf("\n");
    printf("Product of %d & %d = %d\n",a,b,multi);
    printf("\n");
    printf("Division of %d & %d = %d\n",a,b,div);
    printf("\n");
    printf("Modulo of %d & %d = %d\n",a,b,modulo);
    getch();
}
