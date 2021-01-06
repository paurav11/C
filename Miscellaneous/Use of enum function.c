#include <stdio.h>
enum day {Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};
void main()
{
    enum day week_st,week_end;
    week_st=Monday;
    week_end=Sunday;
    printf("%d\n%d",week_st,week_end);
    getch();
}
