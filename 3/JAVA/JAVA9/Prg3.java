import java.util.Scanner;

public class Prg3 {
    static boolean isPalindrome(String str) {
        int l = str.length();
        for (int i = 0; i < l / 2; i++) {
            if (str.charAt(i) != str.charAt(l - i - 1))
                return false;
        }
        return true;
    }

    public static void main(String[] args) {
        System.out.print("Enter a String:");
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine();
        if (isPalindrome(a)) {
            System.out.println("Palindrome");
        } else {
            System.out.println("Not Palindrome");
        }
    }
}