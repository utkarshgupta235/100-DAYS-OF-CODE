#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *infile, *outfile;
    int ch;

    infile = fopen("input.txt", "r");
    if (infile == NULL) {
        perror("Error opening input.txt");
        return 1;
    }

    outfile = fopen("output.txt", "w");
    if (outfile == NULL) {
        perror("Error opening output.txt");
        fclose(infile);
        return 1;
    }

    // Read each character, convert to uppercase, write output
    while ((ch = fgetc(infile)) != EOF) {
        fputc(toupper(ch), outfile);
    }

    fclose(infile);
    fclose(outfile);

    return 0;
}