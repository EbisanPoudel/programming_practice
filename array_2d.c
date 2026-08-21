//this is a code of 2D ARRAY to ask no of students ,no of subjects, adn enter their makrs in each subject then display like a table 
#include <stdio.h>

int main() {
    int n, x;
    printf("How many Students? ");
    scanf("%d", &n);
    printf("How many Subjects? ");
    scanf("%d", &x);

    float s[n][x];

    // Input Loop
    for (int i = 0; i < n; i++) {
        printf("\n--- Student %d ---\n", i + 1);
        for (int j = 0; j < x; j++) {
            printf("Enter score for Subject %d: ", j + 1);
            scanf("%f", &s[i][j]);
        }
    }

    // --- TABLE HEADER ---
    printf("\n\n==================== TEST SCORES ====================\n");
    printf("%-12s", "Student"); // Left-aligned column for student names/IDs
    
    for (int j = 0; j < x; j++) {
        printf("  Sub %-3d", j + 1); // Header for each subject column
    }
    printf("\n----------------------------------------------------\n");

    // --- TABLE ROWS ---
    for (int i = 0; i < n; i++) {
        printf("Student %-5d", i + 1); // Corrected student number per row
        
        for (int j = 0; j < x; j++) {
            printf("%8.2f", s[i][j]); // Printed score formatted to 2 decimal places
        }
        printf("\n"); // Move to next line for the next student
    }
    printf("====================================================\n");

    return 0;
}
