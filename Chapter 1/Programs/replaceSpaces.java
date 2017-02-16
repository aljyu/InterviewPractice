import java.*;
import java.Scanner;

public class replaceSpaces {
	public static void main(String[] args) {
		int numOfSpace = 0;

		Scanner scan = new Scanner(System.in);
		System.out.print("Please enter a string without spaces");
		String str = scan.nextLine();

		for (int i = 0; i < str.length(); i++) {
			if (str.charAt(i).equals(' ')) {
				numOfSpace++;
			}
		}
		System.out.println("There are " + numOfSpace + " spaces");
	}
}
