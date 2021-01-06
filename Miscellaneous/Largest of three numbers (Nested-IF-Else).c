#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        printf("%d is the largest",a);
        else
        printf("%d is the largest",c);
    }
    if(b>c)
    printf("%d is the largest",b);
    else
    printf("%d is the largest",c);
    getch();
}
