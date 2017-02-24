#include <stdio.h>

char* replace(char* str, int length) {
    int spaces = 0;
    int ptr = 0;

    // Find the number of spaces in the string
    for (int j = 0; j < length; j++) {
        if (str[j] == ' ') {
            spaces++;
        }
    }
    /* 
       Find the final length of how long the string will be after
       the spaces have been replaced.
    */
    int finalLength = length + (spaces * 2);
    // Null-terminate the string
    str[finalLength] = '\0';
    // Start from the back and replace each space with '%20'
    for (int k = (length - 1); k >= 0; k--) {
        if (str[k] == ' ') {
            str[finalLength - ptr - 1] = '0';
            str[finalLength - ptr - 2] = '2';
            str[finalLength - ptr - 3] = '%';
            ptr = ptr + 3;
        }
        else {
            str[finalLength - ptr - 1] = str[k];
            ptr++;
        }
    }
    return str;
}

int main(int argc, char** argv) {
    char* str = argv[1];
    int length = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }
    char* newStr = replace(str, length);
    printf("The new string is %s\n", newStr);
}
