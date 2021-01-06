#include <stdio.h>
#include <math.h>
void main()
{
    int u,a,t,d;/*u=initial velocity,a=acceleration,t=time in sec,d=distance*/
    printf("Enter initial velocity(u),acceleration(a) & time(t) respectively:");
    scanf("%d%d%d",&u,&a,&t);
    d=(u*t)+(a*pow(t,2))/2;
    printf("Distance travelled by a vehicle in %d second(s) = %d",t,d);
    getch();
}
