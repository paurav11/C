#include <stdio.h>
void main()
{
    float r,p;
    printf("Enter Rupees:");
    scanf("%f",&r);
    p=100*r;
    printf("\n");
    printf("%.2f paise",p);
    getch();
}
