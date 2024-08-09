
//wap to take a integer and find out its reverse
//04august2023
import java.util.Scanner;

public class Prg5 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        int number = scanner.nextInt();
        scanner.close();
        int reversedNumber = reverseInteger(number);
        System.out.println("The reverse of " + number + " is: " + reversedNumber);
    }

    public static int reverseInteger(int num) {
        int reversed = 0;
        while (num != 0) {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }
        return reversed;
    }
}