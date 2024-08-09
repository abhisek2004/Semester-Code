
//wap to input 2 integer and exchange their value
//04august2023
import java.util.Scanner;

public class Prg12 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the first integer: ");
        int num1 = scanner.nextInt();
        System.out.print("Enter the second integer: ");
        int num2 = scanner.nextInt();
        scanner.close();
        System.out.println("Before exchanging:");
        System.out.println("First integer: " + num1);
        System.out.println("Second integer: " + num2);
        int temp = num1;
        num1 = num2;
        num2 = temp;
        System.out.println("After exchanging:");
        System.out.println("First integer: " + num1);
        System.out.println("Second integer: " + num2);
    }
}