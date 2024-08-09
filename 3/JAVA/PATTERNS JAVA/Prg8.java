import java.util.Scanner;

public class Prg8 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Please provide number of rows to print... ");
        int myrows = scanner.nextInt();
        System.out.println("\nThe star pattern is... ");
        for (int m = myrows; m >= 1; m--) {
            for (int n = m; n >= 1; n--) {
                System.out.print("*");
            }
            System.out.println();
        }
        for (int m = 2; m <= myrows; m++) {
            for (int n = m; n >= 1; n--) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}