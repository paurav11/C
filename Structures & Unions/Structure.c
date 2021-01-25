#include <stdio.h>
#include <string.h>

//Defining structure
struct student{
    int age;
    char name[20];
    float marks;
};

/*struct student{
    int age;
    char name[20];
    float marks;
}s1,s2;*/ 

int main(){
    
    struct student s1,s2; //Declaring s1 & s2 structure variables

    //Assigning values to structure variable members
    
    //Student-1 Record
    s1.age = 22;
    strcpy(s1.name,"Paurav Shah");
    s1.marks = 82.5;

    //Student-2 Record
    s2.age = 21;
    strcpy(s2.name,"Hiren Rathod");
    s2.marks = 81.9;

    //Accessing structure members
    printf("Student-1\n");
    printf("Age: %d\n",s1.age);
    printf("Name: %s\n",s1.name);
    printf("Age: %.2f\n\n",s1.marks);

    printf("Student-2\n");
    printf("Age: %d\n",s2.age);
    printf("Name: %s\n",s2.name);
    printf("Age: %.2f\n",s2.marks);
    return 0;
}