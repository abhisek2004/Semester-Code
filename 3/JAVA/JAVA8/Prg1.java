//assignment 04
//02oct2023
//question no-01

import java.util.Scanner;

public class Prg1 {
    String name;
    double height;
    double weight;

    public void patient() {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the name:");
        name = sc.nextLine();
        System.out.println("enter the height:");
        height = sc.nextDouble();
        System.out.println("enter the weight:");
        weight = sc.nextDouble();
        System.out.println("Your name is " + name);
        System.out.println("Your height is " + height);
        System.out.println("Your weight is " + weight);
        double bmi = weight / (height * height);
        System.out.println("Your BMI is " + bmi);
    }

    public static void main(String[] args) {
        Prg1 p1 = new Prg1();
        p1.patient();
    }

}