#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,c;
    float alpha,beta,delta,num1,num2,i;
    printf("Enter coefficients of a quadratic equation:");
    scanf("%d%d%d",&a,&b,&c);

    delta=(b*b)-(4*a*c);
    num1=sqrt(delta);
    num2=sqrt(-delta);
    i=sqrt(-1);

    if(delta>0)
    {
        printf("Roots are real & distinct & they are:-\n");
        alpha=((-b) + num1)/(2*a);
        beta=((-b) - num1)/(2*a);
    }
    else if(delta==0)
    {
        printf("Roots are real & equal & they are:-\n");
        alpha=(-b)/(2*a);
        beta=(-b)/(2*a);
    }
    else if(delta<0)
    {
        printf("Roots are complex & they are:-\n");
        alpha=((-b) + (i*num2))/(2*a);
        beta=((-b) - (i*num2))/(2*a);
    }
    printf("\n%f & %f",alpha,beta);
    getch();
}
