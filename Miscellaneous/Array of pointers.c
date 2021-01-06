#include <stdio.h>
#include <conio.h>
void main()
{
    int var[]={10,100,1000};
    int i,*ptr[3];
    for(i=0;i<3;i++)
    {
        ptr[i]=&var[i];
    }
    for(i=0;i<3;i++)
    {
        printf("Value of v[%d] = %d\n",i,*ptr[i]);
    }
    _getch();
}
