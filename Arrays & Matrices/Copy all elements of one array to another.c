#include <stdio.h>
#include <conio.h>
void main()
{
    int a[5],b[5],i;
    printf("Enter the elements of array: \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    //Copy one array to another
    for(i=0;i<5;i++)
    {
        b[i]=a[i];
    }
    printf("\nElements copied in another array: \n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",b[i]);
    }
    getch();
}
