/* 1.2
 * Implement a function void reverse(char* str) in C or C++ which
 * reverses a null-terminated string.
*/

public static void main(String[] args) {
	System.out.print("Please only enter 1 word: ");
	Scanner scan = new Scanner(System.in);
	String str = scan.next();

	char[] charArray = str.toCharArray();
	char[] revArray = new char[str.length()];
	int index = str.length();
	for (int i = 0; i < str.length(); i++) {
		revArray[i] = charArray[index - 1];
		index--;
	}
	String revString = new String(revArray);
	System.out.println("The reversed string is: " + revString);
}
