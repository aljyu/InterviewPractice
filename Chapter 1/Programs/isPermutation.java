import java.util.*;

public class isPermutation {
    public static void main(String[] args) {
        System.out.print("Please enter the 1st word: ");
        Scanner scan = new Scanner(System.in);
        String str1 = scan.next();
        System.out.print("Please enter the 2nd word: ");
        String str2 = scan.next();

        boolean result = isPermutation(str1, str2);
        if (result) {
            System.out.println("1 string is a permutation of the other!");
        }
        else {
            System.out.println("1 string is not a permutation of the other!");
        }
    }
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
}

