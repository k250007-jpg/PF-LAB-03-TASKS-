#include <stdio.h>

int main() {
    int subject1_marks, subject2_marks, subject3_marks;
    int total_marks;
    float percentage;

    printf("Enter marks of subject 1: ");
    scanf("%d", &subject1_marks);

    printf("Enter marks of subject 2: ");
    scanf("%d", &subject2_marks);

    printf("Enter marks of subject 3: ");
    scanf("%d", &subject3_marks);

    total_marks = subject1_marks + subject2_marks + subject3_marks;
    percentage = (total_marks / 300.0) * 100;

    printf("Total marks = %d\n", total_marks);
    printf("Percentage = %.2f\n", percentage);

    return 0;
}
