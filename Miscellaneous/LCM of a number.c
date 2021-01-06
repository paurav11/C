#include <stdio.h>
#include <conio.h>
void main()
{
    int num1,num2,max,lcm=1,i;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    max=(num1>num2)?num1:num2;
    i=max;

    while(1)
    {
        if(i%num1==0 && i%num2==0)
        {
            lcm=i;
            break;
        }
        i+=max;
    }
    printf("LCM of %d & %d = %d",num1,num2,lcm);
    _getch();
}
