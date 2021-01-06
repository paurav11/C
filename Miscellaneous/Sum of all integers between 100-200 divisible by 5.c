#include <stdio.h>
void main()
{
    int i,sum=0;

    for(i=105;i<200;i=i+5)
    {
        if(i%5==0)
        sum=sum+i;
    }
    printf("Sum of the integers greater than 100 & less than 200 and are divisible by 5 = %d",sum);
    getch();
}
