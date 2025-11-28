//Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function that returns the top student
struct Student getTopStudent(struct Student s[], int n) {
    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }
    return s[maxIndex];   // return the structure
}

int main() {
    struct Student s[5];
    struct Student top;

    // Input details
    for (int i = 0; i < 5; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%49s", s[i].name);

        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Get top student
    top = getTopStudent(s, 5);

    // Print result
    printf("\n\n--- Top Student ---\n");
    printf("Name: %s\n", top.name);
    printf("Roll No: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}