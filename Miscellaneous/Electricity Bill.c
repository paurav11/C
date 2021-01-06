#include <stdio.h>
#include <conio.h>
void main()
{
    int user,cust_id[100],unit[100],i,min_charge=100;
    float amt[100],t_amt[100];


    printf("Enter the no. of users:");
    scanf("%d",&user);

    for(i=0;i<user;i++)
    {
        printf("\nEnter your customer ID:");
        scanf("%d",&cust_id[i]);
        printf("\nEnter no. of units consumed:");
        scanf("%d",&unit[i]);
    }

    for(i=0;i<user;i++)
    {
        if(unit[i]>0 && unit[i]<=200)
        {
           amt[i]=unit[i]*0.8;
        }
        else if(unit[i]>200 && unit[i]<=300)
        {
            amt[i]=(200*0.8)+((unit[i]-200)*0.9);
        }
        else if(unit[i]>300)
        {
            amt[i]=(200*0.8)+(100*0.9)+((unit[i]-300)*1);
        }

        t_amt[i]=min_charge+amt[i];

        if(t_amt[i]>400)
        {
            t_amt[i]=t_amt[i]+(t_amt[i]*0.15);
        }
    }

    printf("\n\tELECTRICTY BILL\n");

    for(i=0;i<user;i++)
    {
        printf("\nCustomer ID: %d",cust_id[i]);
        printf("\nUnits Consumed: %d",unit[i]);
        printf("\nTotal Amount Due: Rs. %.2f\n",t_amt[i]);
    }
    getch();
}
