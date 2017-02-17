/* 1.4
 * Write a method to replace all spaces in a string with '%20'. You
 * may assume that the string has sufficient space at the end of the
 * string to hold the additional characters, and that you are given
 * the "true" length of the string. (Notes: If implementing in Java,
 * please use a character array so that you can perform this operation
 * in place.)
*/

public class replaceSpaces {
	public static void main(String[] args) {
		int numOfSpace = 0;
		int ptr = 0;

		Scanner scan = new Scanner(System.in);
		System.out.print("Please enter a string: ");
		String str = scan.nextLine();
		int initLength = str.length();

		// Find the number of spaces in the string
		for (int i = 0; i < initLength; i++) {
			if (str.charAt(i) == ' ') {
				numOfSpace++;
			}
		}
		char[] charArray = str.toCharArray();
		/* 
		   Find the final length of how long the string will be after
		   the spaces have been replaced.
		*/
		int finalLength = (initLength + (2 * numOfSpace));
		char[] newStr = new char[finalLength];
		// Start form the back and replace each space with '%20'
		for (int j = (initLength - 1); j >= 0; j--) {
			if (charArray[j] == ' ') {
				newStr[finalLength - ptr - 1] = '0';
				newStr[finalLength - ptr - 2] = '2';
				newStr[finalLength - ptr - 3] = '%';
				ptr = ptr + 3;
			}
			else {
				newStr[finalLength - ptr - 1] = charArray[j];
				ptr++;
			}
		}
		String answer = new String(newStr);

		System.out.println("The new string is " + answer);
	}
}