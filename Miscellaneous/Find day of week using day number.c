#include <stdio.h>
#include <conio.h>
void main()
{
    int day_no;
    printf("Enter day number of a week(1-7): ");
    scanf("%d",&day_no);

    switch(day_no)
    {
        case 1: printf("Monday");
                break;
        case 2: printf("Tuesday");
                break;
        case 3: printf("Wednesday");
                break;
        case 4: printf("Thursday");
                break;
        case 5: printf("Friday");
                break;
        case 6: printf("Saturday");
                break;
        case 7: printf("Sunday");
                break;
        default: printf("Invalid choice.");
    }
    _getch();
}
