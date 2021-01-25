#include <stdio.h>
#include <string.h>

struct employee{
    int emp_id;
    char emp_name[20];
    struct date{
        int dd;
        int mm;
        int yyyy;
    }doj;
}emp1;

int main(){
    //Assigning values
    emp1.emp_id = 121;
    strcpy(emp1.emp_name,"Paurav Shah");
    emp1.doj.dd = 26;
    emp1.doj.mm = 1;
    emp1.doj.yyyy = 2021;

    //Accessing values
    printf("Employee Details:\n");
    printf("ID: %d\n",emp1.emp_id);
    printf("Name: %s\n",emp1.emp_name);
    printf("Date of joining: %d-%d-%d",emp1.doj.dd,emp1.doj.mm,emp1.doj.yyyy);

    return 0;
}