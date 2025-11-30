//Write a program to take a string input. Change it to sentence case
#include <stdio.h>
#include <ctype.h>  // for toupper() and tolower()

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // take input with spaces

    int i = 0;
    int new_sentence = 1;  // flag to indicate start of sentence

    while(str[i] != '\0') {
        if(new_sentence && isalpha(str[i])) {
            str[i] = toupper(str[i]);  // capitalize first letter
            new_sentence = 0;
        } else {
            str[i] = tolower(str[i]);  // lowercase all other letters
        }

        if(str[i] == '.' || str[i] == '!' || str[i] == '?') {
            new_sentence = 1;  // next letter after punctuation starts new sentence
        }

        i++;
    }

    printf("Sentence case: %s\n", str);

    return 0;
}
