
//wap to take a integer and check if it is palindromic or not
//04august2023
import java.util.Scanner;

public class Prg6 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        int number = scanner.nextInt();
        scanner.close();
        if (isPalindrome(number)) {
            System.out.println(number + " is a palindromic number.");
        } else {
            System.out.println(number + " is not a palindromic number.");
        }
    }

    public static boolean isPalindrome(int num) {
        if (num < 0) {
            return false; // Negative numbers are not palindromic
        }
        int original = num;
        int reversed = 0;
        while (num != 0) {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }
        return original == reversed;
    }
}