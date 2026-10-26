
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
} s[1];

int student_added = 0;

void add_std()
{
    printf("\n========== STUDENT RECORD SYSTEM ==========\n");

    printf("Enter full name: ");
    scanf(" %29[^\n]", s[0].f_name);

    printf("Enter ID: ");
    if (scanf("%d", &s[0].id) != 1) {
        printf("Invalid ID input.\n");
        return;
    }

    int valid;

    do {
        valid = 1;

        printf("Enter marks in 5 subjects (0-100): ");

        if (scanf("%f %f %f %f %f",
                  &s[0].sub1, &s[0].sub2, &s[0].sub3,
                  &s[0].sub4, &s[0].sub5) != 5) {
            printf("Invalid input. Enter five numeric marks.\n");

            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {}

            valid = 0;
            continue;
        }

        if (s[0].sub1 < 0 || s[0].sub1 > 100 ||
            s[0].sub2 < 0 || s[0].sub2 > 100 ||
            s[0].sub3 < 0 || s[0].sub3 > 100 ||
            s[0].sub4 < 0 || s[0].sub4 > 100 ||
            s[0].sub5 < 0 || s[0].sub5 > 100) {
            printf("Invalid marks! Enter them again.\n");
            valid = 0;
        }

    } while (valid == 0);

    s[0].marks = s[0].sub1 + s[0].sub2 + s[0].sub3
               + s[0].sub4 + s[0].sub5;

    s[0].avg = s[0].marks / 5;
    s[0].percentage = (s[0].marks / 500) * 100;

    if (s[0].percentage >= 90)
        strcpy(s[0].grade, "A+");
    else if (s[0].percentage >= 80)
        strcpy(s[0].grade, "A");
    else if (s[0].percentage >= 70)
        strcpy(s[0].grade, "B");
    else if (s[0].percentage >= 60)
        strcpy(s[0].grade, "C");
    else if (s[0].percentage >= 50)
        strcpy(s[0].grade, "D");
    else
        strcpy(s[0].grade, "F");

    student_added = 1;
    printf("Student details added successfully!\n");
}

void print_det()
{
    if (!student_added) {
        printf("Please add student details first.\n");
        return;
    }

    printf("\n========== STUDENT RESULTS ==========\n");
    printf("Name       : %s\n", s[0].f_name);
    printf("ID         : %d\n", s[0].id);
    printf("Subject 1  : %.2f\n", s[0].sub1);
    printf("Subject 2  : %.2f\n", s[0].sub2);
    printf("Subject 3  : %.2f\n", s[0].sub3);
    printf("Subject 4  : %.2f\n", s[0].sub4);
    printf("Subject 5  : %.2f\n", s[0].sub5);
    printf("Total      : %.2f / 500\n", s[0].marks);
    printf("Average    : %.2f\n", s[0].avg);
    printf("Percentage : %.2f%%\n", s[0].percentage);
    printf("Grade      : %s\n", s[0].grade);
}

int search_std()
{
    if (!student_added) {
        printf("Please add student details first.\n");
        return 0;
    }

    int x;

    printf("Enter student ID to search: ");

    if (scanf("%d", &x) != 1) {
        printf("Invalid ID input.\n");

        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF) {}

        return 0;
    }

    if (s[0].id == x) {
        printf("Student found!\n");
        print_det();
    } else {
        printf("Student not found.\n");
    }

    return 0;
}

void topper_std()
{
    if (!student_added) {
        printf("Please add student details first.\n");
        return;
    }

    printf("\n========== TOPPER ==========\n");
    printf("Name       : %s\n", s[0].f_name);
    printf("ID         : %d\n", s[0].id);
    printf("Percentage : %.2f%%\n", s[0].percentage);
    printf("Grade      : %s\n", s[0].grade);
}

void save_std()
{
    if (!student_added) {
        printf("Please add student details first.\n");
        return;
    }

    FILE *fp = fopen("student_detail.txt", "a");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    fprintf(fp, "============================================================\n");
    fprintf(fp, "%-25s %-8s %-8s %-8s %-8s %-8s %-10s %-10s %-10s %-6s\n",
            "Name", "ID", "Sub1", "Sub2", "Sub3", "Sub4",
            "Sub5", "Total", "Average", "Grade");
    fprintf(fp, "============================================================\n");

    fprintf(fp, "%-25s %-8d %-8.2f %-8.2f %-8.2f %-8.2f %-8.2f %-10.2f %-10.2f %-6s\n",
            s[0].f_name, s[0].id,
            s[0].sub1, s[0].sub2, s[0].sub3,
            s[0].sub4, s[0].sub5,
            s[0].marks, s[0].avg, s[0].grade);

    fprintf(fp, "Percentage: %.2f%%\n", s[0].percentage);
    fprintf(fp, "============================================================\n");

    fclose(fp);

    printf("Student records saved to student_detail.txt\n");
}

int main()
{
    int choice;

    do {
        printf("\n========== STUDENT RECORD SYSTEM ==========\n");
        printf("1. Add Student Details\n");
        printf("2. Display Student Details\n");
        printf("3. Search Student by ID\n");
        printf("4. Find Topper\n");
        printf("5. Save Student Records\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid menu input.\n");

            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {}

            continue;
        }

        switch (choice) {
            case 1:
                add_std();
                break;

            case 2:
                print_det();
                break;

            case 3:
                search_std();
                break;

            case 4:
                topper_std();
                break;

            case 5:
                save_std();
                break;

            case 6:
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 6);

    return 0;
}