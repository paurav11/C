#include <stdio.h>
void main()
{
    int b_day,b_month,p_day,p_month,b_year,p_year,age,days_to_go;
    char name[10];
    printf("What is your name?:");
    scanf("%s",name);
    printf("Enter your birth date (dd mm yyyy):");
    scanf("%d%d%d",&b_day,&b_month,&b_year);
    printf("Enter today's date (dd mm yyyy):");
    scanf("%d%d%d",&p_day,&p_month,&p_year);
    age=p_year-b_year;

    if(p_day>=b_day && p_month>=b_month)
    {
        printf("%s,Your age is %d.\n",name,age);
    }
    else if(p_day<b_day && p_month>b_month)
    {
        printf("%s,Your age is %d.\n",name,age);
    }
    else if(p_day<b_day && p_month<b_month)
    {
        printf("%s,Your age is %d.\n",name,age-1);
    }
    else if(p_day<b_day && p_month==b_month)
    {
        printf("%s,Your age is %d.\n",name,age-1);
    }
    else if(p_day==b_day && p_month<b_month)
    {
        printf("%s,Your age is %d.\n",name,age-1);
    }

    if(p_day<b_day && p_month<b_month)
    days_to_go=(b_day+b_month*30)-(p_day+p_month*30);
    else
    days_to_go=365-((p_day+p_month*30)-(b_day+b_month*30));
    printf("Approx. %d days to go for your next birthday!",days_to_go);
    getch();
}
