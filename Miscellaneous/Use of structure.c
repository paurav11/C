#include <stdio.h>
#include <conio.h>
struct personal
{
    char name[100];
    int day;
    char month[10];
    int year;
    double salary;
}person;

void main()
{
    printf("Enter details of a person: \n");
    printf("\nEnter name: ");
    gets(person.name);
    printf("\nEnter date (dd/mm/yyyy): ");
    scanf("%d %s %d",&person.day,person.month,&person.year);
    printf("\nEnter salary: ");
    scanf("%lf",&person.salary);

    printf("\nDetails: \n");
    printf("Name: %s\n",person.name);
    printf("Date: %d-%s-%d\n",person.day,person.month,person.year);
    printf("Salary: %lf",person.salary);
    _getch();
}
