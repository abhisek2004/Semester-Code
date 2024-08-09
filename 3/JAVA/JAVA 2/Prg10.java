
//wap to take an integer and check if it is strong no or not
//04august2023
import java.util.Scanner;

public class Prg10 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        int number = scanner.nextInt();
        scanner.close();

        if (isStrongNumber(number)) {
            System.out.println(number + " is a strong number.");
        } else {
            System.out.println(number + " is not a strong number.");
        }
    }

    public static int factorial(int num) {
        if (num == 0 || num == 1) {
            return 1;
        }
        return num * factorial(num - 1);
    }

    public static boolean isStrongNumber(int num) {
        int original = num;
        int sum = 0;
        while (num != 0) {
            int digit = num % 10;
            sum += factorial(digit);
            num /= 10;
        }
        return original == sum;
    }
}