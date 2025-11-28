//Create Employee structure with nested Date structure for joining date and print details.

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joiningDate;   // nested structure
};

int main() {
    struct Employee e;

    // Input employee details
    printf("Enter employee name: ");
    scanf("%49s", e.name);

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    printf("Enter joining date (day month year): ");
    scanf("%d %d %d",
          &e.joiningDate.day,
          &e.joiningDate.month,
          &e.joiningDate.year);

    // Print employee details
    printf("\n--- Employee Details ---\n");
    printf("Name: %s\n", e.name);
    printf("ID: %d\n", e.id);
    printf("Salary: %.2f\n", e.salary);
    printf("Joining Date: %02d-%02d-%04d\n",
           e.joiningDate.day,
           e.joiningDate.month,
           e.joiningDate.year);

    return 0;
}