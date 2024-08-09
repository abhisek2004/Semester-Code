
//wap to generate fibonaci series using loop
//28august2023
import java.util.*;

public class Prg1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = 0, b = 1, c;
        System.out.println("enter the term");
        int number = sc.nextInt();
        for (int i = 0; i <= number; i++) {
            System.out.println(a);
            c = a + b;
            a = b;
            b = c;
        }
    }
}