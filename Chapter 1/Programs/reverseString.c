#include <stdio.h>

void reverse(char* str) {
	int length = 0;
	int index = 0;
	// Find the length of the original string
	for (int i = 0; str[i] != '\0'; i++) {
		length++;
	}
	// Create another string that has the same length as the original string
	char revStr[length];
	// Make the reversed string a null-terminated string
	revStr[length] = '\0';
	// Reverse the characters from the original string and put them into the reversed string
	for (int j = (length - 1); j >= 0; j--) {
		revStr[j] = str[index];
		index++;
	}
	// Print out the reversed string
	printf("The reversed string is: %s\n", revStr);
}

int main(int argc, char** argv) {
	// Take in a string to reverse
	char* str = argv[1];
	// Print out the original string
	printf("The original string is: %s\n", str);
	// Reverse the original string
	reverse(str);
}
