#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 100

typedef struct {
    char name[max];
    float avg_score;
} Student;

int main() {
    int N;
    printf("Enter the number of students: ");
    scanf("%d", &N);
    Student students[N];
    for (int i = 0; i < N; i++) {
        printf("Enter student name and average score: ");
        scanf("%s %f", students[i].name, &students[i].avg_score);
    }
    for (int i = 0; i < N; i++) {
        if (students[i].avg_score < 10) {
            students[i].avg_score += 1.0;
        } else if (students[i].avg_score >= 10 && students[i].avg_score <= 15) {
            students[i].avg_score += 0.5;
        }
    }
    printf("\nUpdated Student Scores:\n");
    for (int i = 0; i < N; i++) {
        printf("%s %.2f\n", students[i].name, students[i].avg_score);
    }
    return 0;
}
