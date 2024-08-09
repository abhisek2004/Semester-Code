//wap to dispaly ("hello" "welcome to java world","a very good morning")and add two number using function
//28august2023

public class Prg4 {
    public static void main(String[] args) {
        displayMessages();
        int num1 = 0;
        int num2 = 0;
        int sum = addNumbers(num1, num2);
        System.out.println("Sum of " + num1 + " and " + num2 + " is: " + sum);
    }

    public static void displayMessages() {
        System.out.println("Hello! Welcome to the Java world. A very good morning!");
    }

    public static int addNumbers(int a, int b) {
        return a + b;
    }
}