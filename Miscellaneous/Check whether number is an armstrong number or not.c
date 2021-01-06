#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int num,n;
    int i,count=0,d[50];
    printf("Enter a number: ");
    scanf("%d",&n);
    num=n;
    for(i=1;n!=0;i++)
    {
       count++;
       d[i]=n%10;
       n/=10;
    }
    switch(count)
    {
        case 0: printf("\n0 is an armstrong number.");
                break;
        case 1: if(num==pow(d[1],1))
                    printf("\n%d is an armstrong number.",num);
                else
                    printf("\n%d is not an armstrong number.",num);
                break;
        case 2: if(num==pow(d[1],2)+pow(d[2],2))
                    printf("\n%d is an armstrong number.",num);
                else
                    printf("\n%d is not an armstrong number.",num);
                break;
        case 3: if(num==pow(d[1],3)+pow(d[2],3)+pow(d[3],3))
                    printf("\n%d is an armstrong number.",num);
                else
                    printf("\n%d is not an armstrong number.",num);
                break;
        case 4: if(num==pow(d[1],4)+pow(d[2],4)+pow(d[3],4)+pow(d[4],4))
                    printf("\n%d is an armstrong number.",num);
                else
                    printf("\n%d is not an armstrong number.",num);
                break;
        case 5: if(num==pow(d[1],5)+pow(d[2],5)+pow(d[3],5)+pow(d[4],5)+pow(d[5],5))
                    printf("\n%d is an armstrong number.",num);
                else
                    printf("\n%d is not an armstrong number.",num);
                break;
    }
     _getch();
}

