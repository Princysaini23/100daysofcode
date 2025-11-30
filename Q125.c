//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char text[200];

    // Ask for the file name
    printf("Enter file name: ");
    scanf("%s", filename);

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    // Clear input buffer before using fgets
    getchar();

    // Take a new line of text from the user
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append to file
    fputs(text, fp);

    // Close the file
    fclose(fp);

    printf("Text appended successfully!\n");

    return 0;
}
