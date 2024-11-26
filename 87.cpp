#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    int marks;
};

void readStudentInfo(struct Student *students, int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter information for student %d:\n", i + 1);
        printf("Roll No.: ");
        scanf("%d", &students[i].roll_no);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }
}

void displayStudentsAbove500(struct Student *students, int n) {
    printf("\nStudents with marks greater than 500:\n");
    for (int i = 0; i < n; i++) {
        if (students[i].marks > 500) {
            printf("Roll No.: %d\n", students[i].roll_no);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %d\n", students[i].marks);
            printf("\n");
        }
    }
}

int main() {
    struct Student students[10];
    int n = 10;

    readStudentInfo(students, n);
    displayStudentsAbove500(students, n);

    return 0;
}
