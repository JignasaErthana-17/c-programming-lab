#include <stdio.h>

int main() {
    float marks;

    printf("Enter Marks (0-100): ");
    scanf("%f", &marks);

    if (marks >= 90) {
        printf("Grade: A+\n");
    }
    else if (marks >= 80) {
        printf("Grade: A\n");
    }
    else if (marks >= 70) {
        printf("Grade: B\n");
    }
    else if (marks >= 60) {
        printf("Grade: C\n");
    }
    else if (marks >= 50) {
        printf("Grade: D\n");
    }
    else {
        printf("Grade: F (Fail)\n");
    }

    return 0;
}
