// Store the register number, name and 4 marks of a set of students in an array of structure and
// display the details along with total marks in the descending order of total marks.

#include <stdio.h>

struct student
{
    char regNo[10];
    char name[20];
    int marks[4];
    int total;
};

int main()
{
    struct student students[100], temp;
    int n;

    printf("ENTER THE NO OF STUDENTS   \n");
    scanf("%d", &n);
    printf("ENTER THE DETAILS\n");

    for (int i = 0; i < n; i++)
    {
        printf("ENTER THE REG NO  \n");
        scanf("%s", students[i].regNo);
        printf("\nENTER NAME\n");
        scanf("%s", students[i].name);
        printf("\nENTER THE MARKS\n");
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &students[i].marks[j]);
            sum += students[i].marks[j];
        }
        students[i].total = sum;
    }

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (students[i].total < students[j].total)
            {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }

    printf("THE DETAILS ARE\n");

    for (int i = 0; i < n; i++)
    {
        printf("STUDENT %d \n", i + 1);
        printf("\nREG NO       :    %s", students[i].regNo);
        printf("\nNAME         :    %s", students[i].name);
        printf("\nMARKS        :    ");
        for (int j = 0; j < 4; j++)
            printf("%d ", students[i].marks[j]);
        printf("\nTOTAL MARK   :    %d\n", students[i].total);
    }
    return 0;
}