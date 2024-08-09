import java.util.Scanner;

public class Prg11 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Please provide number of rows to print... ");
        int myrows = scanner.nextInt();
        System.out.println("\nThe star pattern is... ");
        for (int m = myrows; m >= 1; m--) {
            for (int n = 1; n <= (m * 2) - 1; n++) {
                if (n == 1 || n == (m * 2) - 1 || m == myrows)
                    System.out.print("*");
                else
                    System.out.print(" ");
            }
            System.out.println();
            for (int p = myrows; p >= m; p--) {
                System.out.print(" ");
            }
        }
    }
}