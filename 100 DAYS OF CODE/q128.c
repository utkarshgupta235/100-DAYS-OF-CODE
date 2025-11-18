#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    int ch;
    int vowels = 0, consonants = 0;

    file = fopen("input.txt", "r");
    if (file == NULL) {
        perror("Error opening input.txt");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (isalpha(ch)) {           // Check if it's a letter
            ch = tolower(ch);        // Convert to lowercase for easier checking
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(file);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}