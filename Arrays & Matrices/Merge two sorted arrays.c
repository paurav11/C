#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100],b[100],c[100],i,j=0,t,n1,n2;
    printf("Enter the size of 1st array: ");
    scanf("%d",&n1);
    printf("\nEnter the elements of 1st array: ");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nEnter the size of 2nd array: ");
    scanf("%d",&n2);
    printf("\nEnter the elements of 2nd array: ");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n1;i++)
    {
        c[i]=a[i];
    }
    for(i=n1;i<(n1+n2);i++)
    {
       if(j<n2)
       {
           c[i]=b[j];
           j++;
       }
    }

    for(i=0;i<(n1+n2);i++)
    {
        for(j=0;j<(n1+n2);j++)
        {
            if(c[j+1]<c[j])
            {
                t=c[j+1];
                c[j+1]=c[j];
                c[j]=t;
            }
        }
    }

    printf("\nArray after merging and sorting: ");
    for(i=0;i<(n1+n2);i++)
    {
        printf("%d ",c[i]);
    }
    getch();
}
