//Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;
    FILE *fp;

    /* --- Input employee data --- */
    printf("Enter employee name: ");
    scanf("%49s", e1.name);

    printf("Enter employee ID: ");
    scanf("%d", &e1.id);

    printf("Enter employee salary: ");
    scanf("%f", &e1.salary);

    /* --- Write to binary file --- */
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nData written to file successfully.\n");

    /* --- Read from binary file --- */
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    /* --- Print data read from file --- */
    printf("\n--- Employee Details Read from File ---\n");
    printf("Name: %s\n", e2.name);
    printf("ID: %d\n", e2.id);
    printf("Salary: %.2f\n", e2.salary);

    return 0;
}