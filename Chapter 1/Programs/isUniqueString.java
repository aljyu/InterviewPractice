import java.util.*;

public class isUniqueString {
	public static void main(String[] args) {
		System.out.print("Please only enter 1 word: ");
		Scanner scan = new Scanner(System.in);
		String str = scan.next();

		boolean isUnique = uniqueCharacters(str);
		if (isUnique) {
			System.out.println(str + " is unique!");
		}
		else {
			System.out.println(str + " is not unique!");
		}
	}

	public static boolean uniqueCharacters(String str) {
		// Find the length of the string
		int len = str.length();
		/* 
		   If there are more than 128 characters in the string, it
		   cannot be unique since there are only 128 characters 
		   according to the ASCII table.
		*/
		if (len > 128) {
			return false;
		}
		/* 
		   Create a new array that contains 128 booleans, one for
		   each ASCII character.
		   The initial value of a boolean is false.
		*/
		boolean[] arr = new boolean[128];
		// Go through each letter in the string
		for (int i = 0; i < len; i++) {
			/* 
			   Find the ASCII value of the character located at the
			   specified string index.
			   If something already exists, return false since the
			   character located at that index already existed in
			   the string.
			*/
			if (arr[str.charAt(i)] == true) {
				return false;
			}
			// Otherwise, set the value at that index to be false
			arr[str.charAt(i)] = true;
		}
		return true;
	}
}

