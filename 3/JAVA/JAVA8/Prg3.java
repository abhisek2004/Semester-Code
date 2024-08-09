// assignment 04
// 02oct2023
// question no-02

import java.util.Scanner;

public class Prg3 {
    static double area(int a) {
        return (int) 3.14 * a * a;
    }

    static double area(int a, int b) {
        return a * b;
    }

    static double area(int a, int b, int c) {
        double s = (double) (a + b + c) / 2;
        double result = (Math.sqrt(s * (s - a) * (s - b) * (s - c)));
        return result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the radius:");
        int r = sc.nextInt();
        System.out.print("Enter the height and width of a rectangle:");
        int h = sc.nextInt();
        int l = sc.nextInt();
        System.out.print("Enter the three sides of the triangle:");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();

        System.out.println("Area of Circle:" + area(r));
        System.out.println("Area of Rectangle:" + area(h, l));
        System.out.println("Area of Triangle:" + area(a, b, c));
    }
}