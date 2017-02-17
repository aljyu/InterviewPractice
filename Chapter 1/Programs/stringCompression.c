#include <stdio.h>
#include <stdlib.h>

char* compressStr(char* str, int length, int maxLength) {
	// Keep track of the number of duplicate characters
	int numOfDup = 1;
	// Keep track of the position in the compressed string
	int index = 1;
	
	/*
	   Create a new string that has a the same length as the 
	   original string.
	*/
	char newStr[maxLength];
	// Keep track of the position in the original string
	char ptr = str[0];
	/*
	   Set the first character in the new string equal to the
	   first character of the original string.
	*/
	newStr[0] = ptr;

	/*
	   If the length of the string is only 2 characters long, 
	   there is no way that the compressed string can be smaller 
	   than the original string.
	   Therefore, the original string should be returned.
	*/
	if (maxLength < 3) {
		printf("The compressed string is not smaller than ");
		printf("the original string!\n");
		return str;
	}
	/*
	   If the character at the current index is the same as the
	   character that is currently being compared to (the "base
	   character"), keep track of the number of duplicates.
	   Otherwise, move on to the next index.
	*/
	for (int j = 1; j < maxLength; j++) {
		if (str[j] == ptr) {
			numOfDup++;
		}
		else {
			/*
			   Convert the integer into a string rep-
			   resentation of that integer.
			   Insert that integer string into the
			   current index position.
			*/
			newStr[index] = (numOfDup + '0');
 			// Update the base character
			ptr = str[index + numOfDup - 1];
			// Reset the number of duplicates
			numOfDup = 1;
			// Move the compressed string's pointer by 1
			index++;
			/* 
 			   Update the index at newStr with the new
			   base character
			*/
			newStr[index] = ptr;
			// Move the compressed string's pointer by 1
			index++;
		}
	}
	/*
	   Convert the array of chars into a char pointer.
	   This is done in order to match the return type.
	*/
	char* result = newStr;
	return result;
}

int main(int argc, char** argv) {
	char* str = argv[1];
	int length = 0;
	int maxLength = 0;

	// Find the length of the string
	for (int i = 0; str[i] != '\0'; i++) {
		length++;
	}
	/* 
	    The biggest the compressed string can be is 2 times the
	    length of the original string (this occurs in the sit-
	    uation where each character in the original string is
	    unique).
	*/
	maxLength = (length * 2);
	char* newStr = compressStr(str, length, maxLength);
	printf("The compressed version of the string is %s\n", newStr);
}
