#include <stdio.h>
#include <conio.h>
void main()
{
    int a[5],i,max,s_max,diff[5],x;
    printf("Enter the elements of array: \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    max=a[0];
    for(i=1;i<5;i++)
    {
        if(a[i]>max)
            max=a[i];
    }

    for(i=0;i<5;i++)
    {
        diff[i]=max-a[i];
    }

    x=diff[0];
    for(i=1;i<5;i++)
    {
        if(diff[i]<x && diff[i]!=0)
        {
            x=diff[i];
            s_max=a[i];
        }
    }
    printf("\nThe second largest element of array = %d",s_max);
    getch();
}
