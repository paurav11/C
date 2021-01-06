#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100],i,j,n,f[100],count;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("\nEnter the elements of array: ");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(a[j]==a[i])
            {
                count++;
            }
        }
        f[i]=count;
    }

    count=0;
    for(i=0;i<n;i++)
    {
        if(f[i]>1)
        {
            count++;
        }
    }
    printf("\nTotal number of duplicate elements = %d",count);
    getch();
}



