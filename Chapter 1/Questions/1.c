/* 1.1
 * Implement an algorithm to determine if a string has all unique
 * characters. What if you cannot use additional data structures?
*/

bool uniqueChars(char* str) {
	int length = 0;
	// Find the length of the string
	for (int i = 0; str[i] != '\0'; i++) {
		length++;
	}
	/*
	   If there are more than 128 characters in the string, it
	   cannot be unique since there are only 128 characters
	   according to the ASCII table.
	*/
	if (length > 128) {
		return false;
	}
	/*
	   Create a new array that contains 128 ints, one for each
	   ASCII character.
	*/
	int uniqueStr[128] = { 0 };
	// Go through each letter in the string
	for (int j = 0; j < length; j++) {
		/*
		   Find the ASCII value of the character located at the
		   specified string index.
		   If something already exists, return false since the
		   character located at that index already existed in
		   the string.
		*/
		if (uniqueStr[str[j]] == 1) {
			return false;
		}
		// Otherwise, set the value at that index to be false
		uniqueStr[str[j]] = 1;
		
	}
	return true;
}
