#include <stdio.h>
int add(int x,int y);
int sub(int x,int y);
int x,y,a,s;
void main()
{
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    a=add(x,y);
    s=sub(x,y);
    printf("%d + %d = %d\n",x,y,a);
    printf("%d - %d = %d",x,y,s);
    getch();
}
add(x,y)
{
    a=x+y;
    return a;
}
sub(x,y)
{
    s=x-y;
    return s;
}
