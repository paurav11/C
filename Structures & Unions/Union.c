#include <stdio.h>
#include <string.h>

//Defining union
union teacher
{
    int age;
    char name[20];
    char subject[10];
}t1;


int main(){
    //Assigning member values
    t1.age = 45;
    strcpy(t1.name,"Dr. Neha Soni");
    strcpy(t1.subject,"Data Mining");

    //Accessing member values
    printf("Teacher details:\n");
    printf("Age: %d\n",t1.age); //Garbage value will be displayed
    printf("Name: %s\n",t1.name); //Garbage value will be displayed
    printf("Subject: %s\n",t1.subject); 
    /*Only this is displayed as union can only display the largest element at once.*/
    return 0;
}