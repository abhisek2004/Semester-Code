
//wap to take a no and find sum of its digit
//04august2023
import java.util.Scanner;

public class Prg8 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        int number = scanner.nextInt();
        scanner.close();
        int digitSum = calculateDigitSum(number);
        System.out.println("The sum of the digits of " + number + " is: " + digitSum);
    }

    public static int calculateDigitSum(int num) {
        int sum = 0;
        while (num != 0) {
            int digit = num % 10;
            sum += digit;
            num /= 10;
        }
        return sum;
    }
}