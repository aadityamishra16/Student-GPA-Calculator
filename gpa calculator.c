#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks[5];
    float gpa;
};

int getGradePoint(float marks) {
    if (marks >= 90) return 10;
    else if (marks >= 80) return 9;
    else if (marks >= 70) return 8;
    else if (marks >= 60) return 7;
    else if (marks >= 50) return 6;
    else if (marks >= 40) return 5;
    else if (marks >= 30) return 4;
    else return 0;
}

void calculateGPA(struct Student *s) {
    int totalPoints = 0;
    for (int i = 0; i < 5; i++) {
        totalPoints += getGradePoint(s->marks[i]);
    }
    s->gpa = (float)totalPoints / 5.0;
}

int main() {
    int n, i, j;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll);
        printf("Name: ");
        scanf("%s", students[i].name);

        for (j = 0; j < 5; j++) {
            printf("Marks in Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
        }

        calculateGPA(&students[i]);
    }

    printf("\n--- Student Report Card ---\n");
    for (i = 0; i < n; i++) {
        printf("\nRoll No: %d\nName: %s\n", students[i].roll, students[i].name);
        printf("Marks: ");
        for (j = 0; j < 5; j++) {
            printf("%.2f ", students[i].marks[j]);
        }
        printf("\nGPA: %.2f\n", students[i].gpa);

        if (students[i].gpa >= 4.0) {
            printf("Result: PASS\n");
        } else {
            printf("Result: FAIL\n");
        }
    }

    return 0;
}