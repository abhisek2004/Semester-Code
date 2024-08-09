import java.util.Scanner;

public class Prg1 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a decimal number: ");
        int decimalNumber = scanner.nextInt();

        String binary = Integer.toBinaryString(decimalNumber);
        String hexadecimal = Integer.toHexString(decimalNumber);
        String octal = Integer.toOctalString(decimalNumber);

        System.out.println("Binary: " + binary);
        System.out.println("Hexadecimal: " + hexadecimal);
        System.out.println("Octal: " + octal);

        scanner.close();
    }
}
