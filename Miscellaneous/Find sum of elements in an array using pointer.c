#include <stdio.h>
#include <conio.h>
void main()
{
    int *p,x[5],i,sum=0;
    printf("Enter the elements of array: \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    p=x;
    printf("Element  Value  Address\n");
    for(i=0;i<5;i++)
    {
        printf("   x[%d]  %5d  %5d\n",i,*p,p);
        sum=sum+*p;
        p++;
    }
    printf("\nSum = %d",sum);
    printf("\nAddress of pointer at the end = %d",p);
    _getch();
}
