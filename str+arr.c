#include <stdio.h>

struct exam {
    char first_name[10];
    int roll_no;
};

// Your original function logic
int std_no() {
    int std;
    printf("How many students? ");
    scanf("%d", &std);
    return std;
}

// Your original function logic
int sub_no() {
    int sub;
    printf("How many subjects? ");
    scanf("%d", &sub);
    return sub;
}

int main() {
    // 1. Declare file pointer named 'school'
    FILE *school;

    int std = std_no();
    int sub = sub_no();

    struct exam s[std];
    float mark[std][sub];

    // --- YOUR INPUT LOGIC ---
    for (int i = 0; i < std; i++) {
        printf("\n=========================================\n");
        printf("        ENTER DETAILS FOR STUDENT %d      \n", i + 1);
        printf("=========================================\n");
        
        printf("Enter Student Name : ");
        scanf("%s", s[i].first_name);
        
        printf("Enter Roll-no      : ");
        scanf("%d", &s[i].roll_no);
        
        printf("\n--- Enter Marks ---\n");
        for (int j = 0; j < sub; j++) {
            printf("  Subject %d mark: ", j + 1);
            scanf("%f", &mark[i][j]);
        }
    }

    // 2. Open 'student.txt' in write mode ("w")
    school = fopen("student.txt", "w");

    // Safety check: ensure file opened successfully
    if (school == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // 3. Write formatted data to the file using fprintf
    fprintf(school, "=========================================================================\n");
    fprintf(school, "                            STUDENT MARKSHEET                            \n");
    fprintf(school, "=========================================================================\n");
    
    // Header Row
    fprintf(school, "%-15s %-12s", "NAME", "ROLL NO");
    for (int j = 0; j < sub; j++) {
        fprintf(school, "  SUB %-3d", j + 1);
    }
    fprintf(school, "\n-------------------------------------------------------------------------\n");

    // Data Rows
    for (int i = 0; i < std; i++) {
        fprintf(school, "%-15s %-12d", s[i].first_name, s[i].roll_no);
        for (int j = 0; j < sub; j++) {
            fprintf(school, "%8.2f", mark[i][j]);
        }
        fprintf(school, "\n");
    }
    fprintf(school, "=========================================================================\n");

    // 4. Close the file pointer
    fclose(school);

    printf("\nData saved successfully to 'student.txt'!\n");

    return 0;
}
