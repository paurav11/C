#include <stdio.h>
void main()
{
    int days,months;
    printf("Enter days:");
    scanf("%d",&days);

    months=days/30;
    days=days%30;

    printf("\n");
    printf("%d months & %d days",months,days);
    getch();
}
