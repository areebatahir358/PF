#include <stdio.h>
int main()
{

    int numberOfStudents;
    // number of rows
    int numberOfTests;
    // number of columns
    printf("Enter number of students: ");
    scanf("%d", &numberOfStudents);
    printf("Enter number of tests: ");
    scanf("%d", &numberOfTests);
    int sum;
    int marks[numberOfStudents][numberOfTests];
    float average;
    float fixvalue = numberOfTests;
    getchar();

    for (int i = 0; i < numberOfStudents; i++)
    {
        printf("    Enter marks of student %d:-\n", i + 1);

        for (int j = 0; j < numberOfTests; j++)
        {
            printf("Enter marks of test : %d :", j + 1);
            scanf("%d", &marks[i][j]);
            while (marks[i][j] <= 0 || marks[i][j] > 100)
            {
                printf("INVALID MARKS!\n");
                printf("Enter again marks of test : %d :", j + 1);
                scanf("%d", &marks[i][j]);
            }
        }
    }

    for (int i = 0; i < numberOfStudents; i++)
    {
        sum = 0;
        for (int j = 0; j < numberOfTests; j++)
        {
            sum = sum + marks[i][j];
        }
        average = sum / fixvalue;

        printf("The score average of tests of student: %d : %.1f\n", i + 1, average);
    }
}
