#include<stdio.h>
#include <math.h>
void printline();
void calculate();
float p,r,CI;
int t,i,n,choice;

int main()
{
    printf("\nWelcome to COMPOUND INTEREST CALCULATOR\n");
    while(choice!=3)
    {
      printf("\n\n1.Calculate\n2.Help\n3.Exit\n");
      printf("\nEnter the choice:");
      scanf("%d",&choice);
      printf("\n");

      switch(choice)
      {
         case 1: calculate();
                 break;

         case 2: printf("What is Compound Interest?\nCompound interest is the addition of interest to the principal sum of a loan or deposit, or in other words, interest on interest.\nIt is the result of reinvesting interest, rather than paying it out, so that interest in the next period is then earned on the principal sum plus previously accumulated interest.");
                 printf("\n\nFormula to find Compound Interest:-\nCI=p*pow(1+(r/(100*n)),n*t)");
                 printf("\nWhere,\nCI = COMPOUND INTEREST\nP = PRINCIPAL AMOUNT\nR = INTEREST RATE\nN=Number of times the interest is compounded every year\nT = TIME PERIOD");
                 break;

         case 3: return 0;

         case 4: printf("Invalid Choice\n");
                 break;
      }
    }
}

void calculate()
{
    printf("Enter the principal amount(In Rs.):");
    scanf("%f",&p);
    printf("\nEnter the interest rate(In percent):");
    scanf("%f",&r);
    printf("\nHow many times the interest is to be compounded per year?:");
    scanf("%d",&n);
    printf("\nEnter the time period(In years):");
    scanf("%d",&t);
    printf("\n\n");

    CI=p*pow(1+(r/(100*n)),n*t);

    printf("\t\t\t    RESULT\n");
    printline();
    printf("\n");
    printf("PRINCIPAL AMOUNT = Rs.%.2f\n",p);
    printf("INTEREST RATE = %.2f\n",r);
    printf("Number of times the interest is compounded every year = %d\n",n);

    if(t==1)
    printf("TIME PERIOD = %d year\n",t);
    else
    printf("TIME PERIOD = %d years\n",t);

    printf("COMPOUND INTEREST = Rs.%.2f",CI);
    printf("\n");
    printline();
}

void printline()
{
    for(i=0;i<=60;i++)
        printf("*");
}

