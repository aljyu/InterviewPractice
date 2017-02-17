/* 1.5
 * Implement a method to perform basic string compression using the
 * counts of repeated characters. For example, the string aabcccccaaa
 * would become a2b1c5a3. If the "compressed" string would not become
 * smaller than the original string, your method should return the
 * original string. You can assume the string has only upper and lower
 * case letters (a - z).
*/

/*
 * Was unable to get the following condition working:
 * The compressed string must be smaller than the original.
*/


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
