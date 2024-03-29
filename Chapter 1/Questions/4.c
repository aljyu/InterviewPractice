/* 1.4
 * Write a method to replace all spaces in a string with '%20'. You
 * may assume that the string has sufficient space at the end of the
 * string to hold the additional characters, and that you are given
 * the "true" length of the string. (Notes: If implementing in Java,
 * please use a character array so that you can perform this operation
 * in place.)
*/

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
