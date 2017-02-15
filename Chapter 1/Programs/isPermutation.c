#include <stdio.h>
#include <stdbool.h>

bool isPermutation(char* str1, char* str2) {
	int str1Len = 0;
	int str2Len = 0;

	// Find the length of the 1st string
	for (int i = 0; str1[i] != '\0'; i++) {
		str1Len++;
	}
	// Find the length of the 2nd string
	for (int j = 0; str2[j] != '\0'; j++) {
		str2Len++;
	}
	/*
	   If the 2 strings have different lengths, there is no way that they can
	   be permutations of one another.
	*/
	if (str1Len != str2Len) {
		return false;
	}
	/*
	   Create a new array that contains 128 ints, one for each ASCII
	   character.
	*/
	int checkStrings[128] = { 0 };
	/*
	   Find the ASCII value of the character located at the
	   specified string index.
	   Replace the initial value of whatever checkStrings has at that
	   position with a 1.
	*/
	for (int k = 0; k < str1Len; k++) {
		checkStrings[str1[k]] = 1;
	}
	/*
	   Find the ASCII value of the character located at the
	   specified string index.
	   Check that index of checkStrings to see if a 1 already exists
	   at that position.
	   If so, replace the integer at that index with a 0 again since the
	   character exists in both strings.
	*/
	for (int l = 0; l < str2Len; l++) {
		if (checkStrings[str2[l]]) {
			checkStrings[str2[l]] = 0;
		}
	}
	/*
	   Go through the checkStrings array and see if there is a 1 at any
	   position. If there is, it means that the 2 strings cannot be
	   permutations of each other.
	*/
	for ( int m = 0; m < 128; m++) {
		if (checkStrings[m]) {
			return false;
		}
	}
	return true;
}

int main(int argc, char** argv) {
	char* str1 = argv[1];
	char* str2 = argv[2];

	bool result = isPermutation(str1, str2);
	if (result) {
		printf("1 string is a permutation of the other!\n");
	}
	else {
		printf("1 string is not a permutation of the other!\n");
	}
}
