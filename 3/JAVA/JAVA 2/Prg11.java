
//wap to take an integer and check it is a magic no or not
//04august2023
import java.util.Scanner;

public class Prg11 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        int number = scanner.nextInt();
        scanner.close();
        if (isMagicNumber(number)) {
            System.out.println(number + " is a magic number.");
        } else {
            System.out.println(number + " is not a magic number.");
        }
    }

    public static int sumOfDigits(int num) {
        int sum = 0;
        while (num != 0) {
            int digit = num % 10;
            sum += digit;
            num /= 10;
        }
        return sum;
    }

    public static boolean isMagicNumber(int num) {
        while (num > 9) {
            num = sumOfDigits(num);
        }
        return num == 1;
    }
}