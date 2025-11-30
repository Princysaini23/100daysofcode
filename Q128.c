//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[50];
    int ch;
    int vowels = 0, consonants = 0;

    // Ask user for filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Open file
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Cannot open file!\n");
        return 1;
    }

    // Read characters one by one
    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);  // convert to lowercase for easy checking

        if (ch >= 'a' && ch <= 'z') {  // only letters
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    // Print result
    printf("Total vowels     : %d\n", vowels);
    printf("Total consonants : %d\n", consonants);

    return 0;
}
