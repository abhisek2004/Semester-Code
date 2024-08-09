import java.util.Scanner;

public class Prg12 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Please provide number of rows to print... ");
        int myrows = scanner.nextInt();
        System.out.println("\nThe star pattern is... ");
        for (int m = 1; m <= myrows; m++) {
            for (int n = 1; n <= myrows; n++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}