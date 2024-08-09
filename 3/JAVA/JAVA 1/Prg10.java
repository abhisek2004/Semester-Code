
//wap to take a no % and check he/she has secured 1st class,2ndclass,3rdclass or fail 
//31July2023
import java.util.Scanner;

public class Prg10 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the percentage: ");
        double percentage = scanner.nextDouble();
        scanner.close();
        if (percentage >= 60.0) {
            System.out.println("Congratulations! You have secured First Class.");
        } else if (percentage >= 50.0) {
            System.out.println("You have secured Second Class.");
        } else if (percentage >= 40.0) {
            System.out.println("You have secured Third Class.");
        } else {
            System.out.println("Sorry, you have failed.");
        }
    }
}