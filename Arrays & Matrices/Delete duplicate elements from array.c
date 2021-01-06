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
                f[j]=0;
            }
        }

        if(f[i]!=0)
        {
            f[i]=count;
        }
    }

    count=0;
    for(i=0;i<n;i++)
    {
        if(f[i]==0)
        {
            count++;
            for(j=i;j<n;j++)
            {
                a[j]=a[j+1];
            }
        }
    }
    printf("\nArray after deleting duplicate elements: ");
    for(i=0;i<(n-count);i++)
    {
        printf("%d ",a[i]);
    }
    getch();
}




