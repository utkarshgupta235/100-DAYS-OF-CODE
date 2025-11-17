#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    int ch;

    printf("Enter the filename: ");
    scanf("%s", filename);

    // Try to open the file in read mode
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist or cannot be opened.\n");
        return 1;
    }

    printf("\nFile content:\n\n");

    // Read and display each character until EOF
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}