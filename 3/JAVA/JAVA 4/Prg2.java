
//wap to find largest among three integer
//28august2023
import java.util.Scanner;

public class Prg2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the three number");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        if ((a > b) || (a > c)) {
            System.out.println(a + " is larger");
        } else if ((b > a) || (b > c)) {
            System.out.println(b + " is larger");

        } else {
            System.out.println(c + " is larger");
        }
    }
}