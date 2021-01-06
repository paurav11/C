#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
int vegetables();
int fruits();
void printline();
char name[15];
int i,items,choice,count=0;
float quantity,price,sum=0;
void main()
{
    printline();
    printf("\n");
    printf("\t\tE-MART\n\n");
    printf("=> List of categories\n\n");
    printf("1.Vegetables\n2.Fruits\n3.Invoice\n4.Exit\n");
    printline();
    printf("\n");

    while(choice!=3)
    {
       printf("Select a category:");
       scanf("%d",&choice);
       switch(choice)
       {
           case 1:vegetables();
                  break;
           case 2:fruits();
                  break;
           case 3:break;
           case 4:exit(0);
        }
    }

   if(count!=0)
   {
    printf("What is your name?:");
    scanf("%s",name);
    printf("\n");
    printline();
    printf("\n");
    printf("\t\tINVOICE\n\n");

    time_t mytime;
    mytime = time(NULL);
    printf(ctime(&mytime));
    printf("\n");

    printf("Company: E-Mart PVT. LTD.\n");
    printf("Customer: %s\n",name);
    printf("\nTotal no. of items sold out = %d\n",count);
    printf("Final amount to be paid = Rs.%.2f\n",sum);
    printf("Amount paid = Rs.%.2f\n",sum);
    printf("\nThank You for shopping with E-Mart.\nWish to see you again.\n(^|^)\n");
    printline();
   }
   else
   printf("Invoice could not be generated, because none of the items has been bought yet.\n");
   getch();
}

 int vegetables()
{
   printline();
   printf("\nCategory: Vegetables\n");

   while(choice!=5)
   {
     printf("\n1.Tomatoes\n2.Potatoes\n3.Onion\n4.Garlic\n5. <--Back to main menu\n");
     printline();
     printf("\nSelect an item:");
     scanf("%d",&choice);
     switch(choice)
     {
       case 1:printf("Rate of tomatoes = Rs.60/kg\n");
              printf("How much you want to buy (in kg)?:");
              scanf("%f",&quantity);
              price=60*quantity;
              count++;
              sum=sum+price;
              break;

       case 2:printf("Rate of potatoes = Rs.20/kg\n");
              printf("How much you want to buy (in kg)?:");
              scanf("%f",&quantity);
              price=20*quantity;
              count++;
              sum=sum+price;
              break;

       case 3:printf("Rate of onion = Rs.50/kg\n");
              printf("How much you want to buy (in kg)?:");
              scanf("%f",&quantity);
              price=50*quantity;
              count++;
              sum=sum+price;
              break;

       case 4:printf("Rate of garlic = Rs.70/kg\n");
              printf("How much you want to buy (in kg)?:");
              scanf("%f",&quantity);
              price=70*quantity;
              count++;
              sum=sum+price;
              break;

       case 5:break;
       default:printf("You selected an item which is not available.\n");
     }
   }
   return sum;
}

int fruits()
{
   printline();
   printf("\nCategory: Fruits\n");

   while(choice!=4)
   {
     printf("\n1.Apple\n2.Banana\n3.Grapes\n4. <--Back to main menu\n");
     printline();
     printf("\nSelect an item:");
     scanf("%d",&choice);
     switch(choice)
     {
       case 1:printf("Rate of apples = Rs.100/kg\n");
              printf("How much you want to buy (in kg)?:");
              scanf("%f",&quantity);
              price=100*quantity;
              count++;
              sum=sum+price;
              break;

       case 2:printf("Rate of bananas = Rs.10/kg\n");
              printf("How much you want to buy (in kg)?:");
              scanf("%f",&quantity);
              price=10*quantity;
              count++;
              sum=sum+price;
              break;

       case 3:printf("Rate of grapes = Rs.50/kg\n");
              printf("How much you want to buy (in kg)?:");
              scanf("%f",&quantity);
              price=50*quantity;
              count++;
              sum=sum+price;
              break;
       case 4:break;
       default:printf("You selected an item which is not available.\n");
     }
   }
   return sum;
}

void printline()
{
    for(i=0;i<80;i++)
    {
        printf("=");
    }
}
