#include <stdio.h>
void main()
{
    float km,m,cm,inches,feet;
    printf("Enter the distance in KM:");
    scanf("%f",&km);

    m=km*1000;
    cm=m*100;
    inches=cm/2.54;
    feet=inches/12;

    printf("\n%f meters\n",m);
    printf("%f centimeters\n",cm);
    printf("%f inches\n",inches);
    printf("%f feet\n",feet);
    getch();
}
