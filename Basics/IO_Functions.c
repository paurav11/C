/*Standard IO Functions - printf() and scanf()*/

#include <stdio.h>
#include <string.h>

int main(){
    char name[12];
    int age;
    float height, weight;
    char gender[7];

    printf("Enter your name: ");
    scanf("%s",&name);
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your height and weight in (cms) and (kgs) respectively: ");
    scanf("%f %f",&height,&weight);
    printf("Enter your gender: ");
    scanf("%s",&gender);

    if(strcmp(gender,"male")==0 || strcmp(gender,"Male")==0){
        printf("\nA man named %s of age %d is %.2f cms tall and has weight around %.2f kgs.",name,age,height,weight);
    } else if(strcmp(gender,"female")==0 || strcmp(gender,"Female")==0){
        printf("\nA woman named %s of age %d is %.2f cms tall and has weight around %.2f kgs.",name,age,height,weight);
    } else{
        printf("\nSorry, we are not able to process your gender properly.");
    }
    return 0;
}