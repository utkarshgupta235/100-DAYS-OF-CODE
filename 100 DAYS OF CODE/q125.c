#include <stdio.h>

int main() {
    char filename[100];
    char text[500];

    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open file in append mode
    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Clear input buffer before using fgets
    getchar();

    printf("Enter a line of text to append: ");
    fgets(text, sizeof(text), stdin);

    // Write to the file
    fputs(text, fp);

    printf("Text appended successfully.\n");

    fclose(fp);
    return 0;
}