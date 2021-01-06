#include <stdio.h>
#include <conio.h>
void main()
{
    int num,count=0,d[50],i;
    int f0=0,f1=0,f2=0,f3=0,f4=0,f5=0,f6=0,f7=0,f8=0,f9=0;
    printf("Enter a number: ");
    scanf("%d",&num);

    while(num!=0)
    {
        count++;
        d[count]=num%10;
        num/=10;
    }
    for(i=count;i>=1;i--)
    {
        if(d[i]==0)
        {
            f0++;
        }
        else if(d[i]==1)
        {
            f1++;
        }
        else if(d[i]==2)
        {
            f2++;
        }
        else if(d[i]==3)
        {
            f3++;
        }
        else if(d[i]==4)
        {
            f4++;
        }
        else if(d[i]==5)
        {
            f5++;
        }
        else if(d[i]==6)
        {
            f6++;
        }
        else if(d[i]==7)
        {
            f7++;
        }
        else if(d[i]==8)
        {
            f8++;
        }
        else if(d[i]==9)
        {
            f9++;
        }
    }
    printf("Frequecy of 0 = %d\n",f0);
    printf("Frequecy of 1 = %d\n",f1);
    printf("Frequecy of 2 = %d\n",f2);
    printf("Frequecy of 3 = %d\n",f3);
    printf("Frequecy of 4 = %d\n",f4);
    printf("Frequecy of 5 = %d\n",f5);
    printf("Frequecy of 6 = %d\n",f6);
    printf("Frequecy of 7 = %d\n",f7);
    printf("Frequecy of 8 = %d\n",f8);
    printf("Frequecy of 9 = %d\n",f9);
    _getch();
}
