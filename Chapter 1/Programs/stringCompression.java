import java.util.*;

public class stringCompression {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.print("Please enter a string to ");
		System.out.print("compress: ");

		String str = scan.next();
		String cmprStr = compressString(str);
		System.out.println("The compressed string is " + cmprStr);
	}

	public static String compressString(String str) {
		char currChar = str.charAt(0);
		char[] cmprStrCharArray = new char[str.length() * 2];
		int count = 1;
		int finalLength = 1;
		int currIndex = 1;

		cmprStrCharArray[0] = str.charAt(0);

		/*
		   Find the compressed string
		*/
		for (int i = 1; i < str.length(); i++) {
			if (str.charAt(i) == currChar) {
				count++;
			}
			else {
				cmprStrCharArray[currIndex] = (char)(count + '0');
				currIndex++;
				finalLength++;
				currChar = str.charAt(i);
				cmprStrCharArray[currIndex] = currChar;
				count = 1;
				currIndex++;
				finalLength++;
			}
		}
		cmprStrCharArray[currIndex] = (char)(count + '0');
		finalLength++;

		/*
		   Check to see if the compressed string is not
		   smaller than the original string.
		*/
		if (finalLength > str.length()) {
			return str;
		}
		else {
			String cmprStr = new String(cmprStrCharArray);
			return cmprStr;
		}
	}
}
