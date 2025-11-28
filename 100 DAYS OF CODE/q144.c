//Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function that accepts structure and prints it
void printStudent(struct Student s) {
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s1;

    // Input
    printf("Enter name: ");
    scanf("%49s", s1.name);

    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    // Function call
    printStudent(s1);

    return 0;
}