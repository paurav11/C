#include <stdio.h>
#include <conio.h>
union job
{
    char name[100];
    float salary;
}p1;
void main()
{
    printf("Enter name: ");
    gets(p1.name);
    printf("\nEnter salary: ");
    scanf("%f",&p1.salary);
    printf("\nDetails: \n");
    printf("Name: %s\n",p1.name);
    printf("Salary: %f\n",p1.salary);
    _getch();
}
