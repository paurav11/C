#include<stdio.h>
void printline();
void calculate();
float p,r,SI;
int t,i,choice;

int main()
{
    printf("\nWelcome to SIMPLE INTEREST CALCULATOR\n");
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

         case 2: printf("What is Simple Interest?\nSimple interest is a quick method of calculating the interest charge on a loan.\nSimple interest is determined by multiplying the daily interest rate by the principal by the number of days that elapse between payments.");
                 printf("\nFormula to find Simple Interest:-\n\nSI=(P*R*T)/100\n");
                 printf("\nWhere,\nSI = SIMPLE INTEREST\nP = PRINCIPAL AMOUNT\nR = INTEREST RATE\nT = TIME PERIOD");
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
    printf("\n");
    printf("Enter the interest rate(In percent):");
    scanf("%f",&r);
    printf("\n");
    printf("Enter the time period(In years):");
    scanf("%d",&t);
    printf("\n\n");

    SI=(p*r*t)/100;

    printf("\t    RESULT\n");
    printline();
    printf("\n");
    printf("PRINCIPAL AMOUNT = Rs.%.2f\n",p);
    printf("INTEREST RATE = %.2f\n",r);

    if(t==1)
    printf("TIME PERIOD = %d year\n",t);
    else
    printf("TIME PERIOD = %d years\n",t);

    printf("SIMPLE INTEREST = Rs.%.2f",SI);
    printf("\n");
    printline();
}

void printline()
{
    for(i=0;i<=30;i++)
        printf("*");
}
