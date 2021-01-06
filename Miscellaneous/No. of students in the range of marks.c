#include <stdio.h>
#include <conio.h>
int student,marks,i,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0;
void main()
{
    printf("Enter the no. of students:");
    scanf("%d",&student);

    for(i=0;i<student;i++)
    {
        printf("Enter the marks of student-%d (Out of 100):",i+1);
        scanf("%d",&marks);

        if(marks>80 && marks<=100)
            c1++,c5++;

        if(marks>60 && marks<=100)
            {
                c2++;
                if(marks>60 && marks<=80)
                {
                    c6++;
                }
            }

        if(marks>40 && marks<=100)
        {
                c3++;
                if(marks>40 && marks<=60)
                {
                    c7++;
                }
        }

        if(marks>=0 && marks<=40)
            c4++,c8++;


    }
    printf("\nStudents who have obtained more than 80 marks = %d\n",c1);
    printf("Students who have obtained more than 60 marks = %d\n",c2);
    printf("Students who have obtained more than 40 marks = %d\n",c3);
    printf("Students who have obtained 40 or less marks = %d\n",c4);
    printf("Students in the range 81 to 100 = %d\n",c5);
    printf("Students in the range 61 to 80 = %d\n",c6);
    printf("Students in the range 41 to 60 = %d\n",c7);
    printf("Students in the range 0 to 40 = %d\n",c8);
    getch();
}
