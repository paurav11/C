#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100],e[100],o[100],i,n,ecount=0,ocount=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("\nEnter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            o[ocount]=a[i];
            ocount++;
        }
    }

    printf("\nArray of odd elements: ");
    for(i=0;i<ocount;i++)
    {
        printf("%d ",o[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            e[ecount]=a[i];
            ecount++;
        }
    }

    printf("\nArray of even elements: ");
    for(i=0;i<ecount;i++)
    {
        printf("%d ",e[i]);
    }
    getch();
}
