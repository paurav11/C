#include <stdio.h>
#include <conio.h>
void main()
{
    int n,s,total,i,j,marks,id;
    printf("Enter no. of students:");
    scanf("%d",&n);
    printf("Enter no. of subjects:");
    scanf("%d",&s);
    printf("\n");

    for(i=0;i<n;i++)
    {
        total=0;
        printf("\nEnter the student ID:");
        scanf("%d",&id);
        printf("Enter the marks of %d subjects for student with ID: %d.\n",s,id);
        for(j=0;j<s;j++)
        {
           scanf("%d",&marks);
           total=total+marks;
        }
        printf("TOTAL MARKS = %d\n",total);
    }
    getch();
}
