
#include <stdio.h>
#include <string.h>

struct students {
    char f_name[30];
    int id;
    float sub1, sub2, sub3, sub4, sub5;
    float marks;
    float avg;
    float percentage;
    char grade[3];
};

int main()
{
    struct students s[5];

    printf("========== STUDENT RECORD SYSTEM ==========\n");

    // PART 1: ENTER STUDENT DETAILS
    for (int i = 0; i < 5; i++)
    {
        printf("\nDetails of Student %d\n", i + 1);

        printf("Enter full name: ");
        scanf(" %29[^\n]", s[i].f_name);

        printf("Enter ID: ");
        scanf("%d", &s[i].id);

        // PART 1A: VALIDATE SUBJECT MARKS
        int valid;

        do {
            valid = 1;

            printf("Enter marks in 5 subjects (0-100): ");

            if (scanf("%f %f %f %f %f",
                      &s[i].sub1, &s[i].sub2, &s[i].sub3,
                      &s[i].sub4, &s[i].sub5) != 5)
            {
                printf("Invalid input. Enter five numeric marks.\n");

                int ch;
                while ((ch = getchar()) != '\n' && ch != EOF) {}

                valid = 0;
                continue;
            }

            if (s[i].sub1 < 0 || s[i].sub1 > 100 ||
                s[i].sub2 < 0 || s[i].sub2 > 100 ||
                s[i].sub3 < 0 || s[i].sub3 > 100 ||
                s[i].sub4 < 0 || s[i].sub4 > 100 ||
                s[i].sub5 < 0 || s[i].sub5 > 100)
            {
                printf("Invalid marks! Enter them again.\n");
                valid = 0;
            }

        } while (valid == 0);

        // PART 1B: CALCULATE TOTAL, AVERAGE, PERCENTAGE
        s[i].marks = s[i].sub1 + s[i].sub2 + s[i].sub3
                   + s[i].sub4 + s[i].sub5;

        s[i].avg = s[i].marks / 5;
        s[i].percentage = (s[i].marks / 500) * 100;

        // PART 1C: CALCULATE GRADE
        if (s[i].percentage >= 90)
            strcpy(s[i].grade, "A+");
        else if (s[i].percentage >= 80)
            strcpy(s[i].grade, "A");
        else if (s[i].percentage >= 70)
            strcpy(s[i].grade, "B");
        else if (s[i].percentage >= 60)
            strcpy(s[i].grade, "C");
        else if (s[i].percentage >= 50)
            strcpy(s[i].grade, "D");
        else
            strcpy(s[i].grade, "F");
    }

    // PART 2: DISPLAY ALL STUDENT RESULTS
    printf("\n========== STUDENT RESULTS ==========\n");

    for (int i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("-----------------------------------------------\n");

        printf("Name       : %s\n", s[i].f_name);
        printf("ID         : %d\n", s[i].id);
        printf("Subject 1  : %.2f\n", s[i].sub1);
        printf("Subject 2  : %.2f\n", s[i].sub2);
        printf("Subject 3  : %.2f\n", s[i].sub3);
        printf("Subject 4  : %.2f\n", s[i].sub4);
        printf("Subject 5  : %.2f\n", s[i].sub5);
        printf("Total      : %.2f / 500\n", s[i].marks);
        printf("Average    : %.2f\n", s[i].avg);
        printf("Percentage : %.2f%%\n", s[i].percentage);
        printf("Grade      : %s\n", s[i].grade);
    }

    // PART 3: SEARCH STUDENT BY ID
    int x;
    int found = 0;

    printf("\nEnter the student ID to search: ");

    if (scanf("%d", &x) != 1)
    {
        printf("Invalid ID input.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        if (s[i].id == x)
        {
            found = 1;

            printf("\nStudent found!\n");
            printf("-----------------------------------------------\n");

            printf("Name       : %s\n", s[i].f_name);
            printf("ID         : %d\n", s[i].id);
            printf("Subject 1  : %.2f\n", s[i].sub1);
            printf("Subject 2  : %.2f\n", s[i].sub2);
            printf("Subject 3  : %.2f\n", s[i].sub3);
            printf("Subject 4  : %.2f\n", s[i].sub4);
            printf("Subject 5  : %.2f\n", s[i].sub5);
            printf("Total      : %.2f / 500\n", s[i].marks);
            printf("Average    : %.2f\n", s[i].avg);
            printf("Percentage : %.2f%%\n", s[i].percentage);
            printf("Grade      : %s\n", s[i].grade);

            break;
        }
    }

    if (found == 0)
        printf("Student not found.\n");

    // PART 4: FIND THE HIGHEST PERCENTAGE
    float high = s[0].percentage;

    for (int i = 1; i < 5; i++)
    {
        if (s[i].percentage > high)
        {
            high = s[i].percentage;
        }
    }

    // PART 5: DISPLAY ALL TOPPERS
    printf("\n========== STUDENT TOPPER(S) ==========\n");

    for (int i = 0; i < 5; i++)
    {
        if (s[i].percentage == high)
        {
            printf("-----------------------------------------------\n");
            printf("Name       : %s\n", s[i].f_name);
            printf("ID         : %d\n", s[i].id);
            printf("Total      : %.2f / 500\n", s[i].marks);
            printf("Average    : %.2f\n", s[i].avg);
            printf("Percentage : %.2f%%\n", s[i].percentage);
            printf("Grade      : %s\n", s[i].grade);
        }
    }

    return 0;
}
