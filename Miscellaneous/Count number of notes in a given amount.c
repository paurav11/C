#include <stdio.h>
#include <conio.h>
void printline()
{
    for(int i=0;i<20;i++)
    printf("*");
}
void main()
{
    int amt;
    int count2000=0,count500=0,count200=0,count100=0,count50=0,count20=0,count10=0,count5=0,count2=0,count1=0;
    printf("Enter the amount: ");
    scanf("%d",&amt);

    if(amt>=2000)
    {
        count2000=amt/2000;
        amt=amt-count2000*2000;
    }

    if(amt>=500)
    {
        count500=amt/500;
        amt=amt-count500*500;
    }

    if(amt>=200)
    {
        count200=amt/200;
        amt=amt-count200*200;
    }

    if(amt>=100)
    {
        count100=amt/100;
        amt=amt-count100*100;
    }

    if(amt>=50)
    {
        count50=amt/50;
        amt=amt-count50*50;
    }

    if(amt>=20)
    {
        count20=amt/20;
        amt=amt-count20*20;
    }

    if(amt>=10)
    {
        count10=amt/10;
        amt=amt-count10*10;
    }

    if(amt>=5)
    {
        count5=amt/5;
        amt=amt-count5*5;
    }

    if(amt>=2)
    {
        count2=amt/2;
        amt=amt-count2*2;
    }

    if(amt>=1)
    {
        count1=amt/1;
        amt=amt-count1*1;
    }
    printline();
    printf("\n    NOTES\n\n");
    printf("2000 x %d = %d\n",count2000,2000*count2000);
    printf(" 500 x %d = %d\n",count500,500*count500);
    printf(" 200 x %d = %d\n",count200,200*count200);
    printf(" 100 x %d = %d\n",count100,100*count100);
    printf("  50 x %d = %d\n",count50,50*count50);
    printf("  20 x %d = %d\n",count20,20*count20);
    printf("  10 x %d = %d\n",count10,10*count10);
    printf("   5 x %d = %d\n",count5,5*count5);
    printf("   2 x %d = %d\n",count2,2*count2);
    printf("   1 x %d = %d\n",count1,1*count1);
    printline();
    _getch();
}
