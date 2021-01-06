#include <stdio.h>
void main()
{
    typedef int marks;
    marks a,b,c;
    printf("Enter marks:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Total marks = %d",c);
    getch();
}
