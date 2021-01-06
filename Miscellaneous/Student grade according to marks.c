#include <stdio.h>
#include <conio.h>
void main()
{
    int marks,index;
    printf("Enter the marks of the student (Out of 100):");
    scanf("%d",&marks);
    index=marks/10;

    switch(index)
    {
       case 10:
       case 9:
       case 8: printf("Grade = Honours");
               break;
       case 7:
       case 6: printf("Grade = First Division");
               break;
       case 5: printf("Grade = Second Division");
               break;
       case 4: printf("Grade = Third Division");
               break;
       default:printf("Grade = Fail");
               break;
    }
    getch();
}
