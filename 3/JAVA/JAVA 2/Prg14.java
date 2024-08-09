
//wap to find largest among three integer
//04august2023
import java.util.Scanner;

public class Prg14 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the first integer: ");
        int num1 = scanner.nextInt();
        System.out.print("Enter the second integer: ");
        int num2 = scanner.nextInt();
        System.out.print("Enter the third integer: ");
        int num3 = scanner.nextInt();
        scanner.close();
        int largest = num1;
        if (num2 > largest) {
            largest = num2;
        }
        if (num3 > largest) {
            largest = num3;
        }
        System.out.println("The largest number among " + num1 + ", " + num2 + ", and " + num3 + " is: " + largest);
    }
}