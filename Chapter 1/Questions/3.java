/* 1.3
 * Given two strings, write a method to decide if one is a
 * permutation of the other.
*/

public static boolean isPermutation(String str1, String str2) {
	/*
	   If the 2 strings have different lengths, there is no way that they can
	   be permutations of one another.
	*/
	if (str1.length() != str2.length()) {
		return false;
	}
	// Sort the first string
	String firstStr = sortString(str1);
	// Sort the second string
	String secondStr = sortString(str2);
	// If the 2 sorted strings are equal to one another, they are permutations
	if (firstStr.equals(secondStr)) {
		return true;
	}
	// Otherwise, the 2 strings are not permutations
	return false;
}
public static String sortString(String str) {
	// Convert the given string to a character array
	char[] charArray = str.toCharArray();
	// Sort the character array
	java.util.Arrays.sort(charArray);
	// Convert the character array to a string
	String firstString = new String(charArray);
	return firstString;
}
