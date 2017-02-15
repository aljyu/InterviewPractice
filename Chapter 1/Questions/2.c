/* 1.2
 * Implement a function void reverse(char* str) in C or C++ which
 * reverses a null-terminated string.
*/

void reverse(char* str) {
    int length = 0;
    int index = 0;
    // Find the length of the original string
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }
    /*
       Create another string that has the same length as the original
       string.
    */
    char revStr[length];
    // Make the reversed string a null-terminated string
    revStr[length] = '\0';
    /*
       Reverse the characters from the original string and put them
       into the reversed string.
    */
    for (int j = (length - 1); j >= 0; j--) {
        revStr[j] = str[index];
        index++;
    }
    // Print out the reversed string
    printf("The reversed string is: %s\n", revStr);
}
