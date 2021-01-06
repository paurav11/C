#include <stdio.h>
#include <conio.h>
void main()
{
    int month_no,year;
    printf("Enter month number(1-12): ");
    scanf("%d",&month_no);
    printf("Enter year: ");
    scanf("%d",&year);

    switch(month_no)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: printf("31 days");
                 break;
        case 4:
        case 6:
        case 9:
        case 11: printf("30 days");
                 break;
        case 2:  if(year%4==0)
                     printf("29 days");
                 else
                     printf("28 days");
                 break;
    }
    _getch();
}
