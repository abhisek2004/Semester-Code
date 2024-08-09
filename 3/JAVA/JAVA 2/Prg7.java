
//wap to take an integer and check if it armstrong
//04august2023
import java.util.Scanner;

public class Prg7 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        int number = scanner.nextInt();
        scanner.close();
        if (isArmstrongNumber(number)) {
            System.out.println(number + " is an Armstrong number.");
        } else {
            System.out.println(number + " is not an Armstrong number.");
        }
    }

    public static boolean isArmstrongNumber(int num) {
        if (num < 0) {
            return false;
        }
        int original = num;
        int sum = 0;
        int numDigits = (int) Math.log10(num) + 1;
        while (num != 0) {
            int digit = num % 10;
            sum += Math.pow(digit, numDigits);
            num /= 10;
        }
        return original == sum;
    }
}