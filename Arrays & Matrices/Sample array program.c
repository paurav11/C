#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10],i;
    printf("Enter the elements of array: \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nAfter negation elements of array are: \n");
    for(i=0;i<10;i++)
    {
        printf("-%d\n",a[i]);
    }
    getch();
}
