
// assignment 04
// 02oct2023
// question no-04
import java.util.Scanner;

class Person {
    String name;
}

class Employee extends Person {
    Scanner sc = new Scanner(System.in);
    double annualSalary;
    int year;
    String insuranceNumber;

    void input() {
        System.out.print("Enter the Name of the Employee: ");
        name = sc.nextLine();
        System.out.print("Enter the insurance number:");
        insuranceNumber = sc.nextLine();
        System.out.print("Enter the Annual Salary:");
        annualSalary = sc.nextDouble();
        System.out.print("Enter the year of joining:");
        year = sc.nextInt();
    }

    void display() {
        System.out.println("Name: " + name + "\nAnnual Salary: " + annualSalary + "\nYear of joining: " + year
                + "\nInsurance Number: " + insuranceNumber);
    }
}

public class Prg5 {
    public static void main(String[] args) {
        Employee emp = new Employee();
        System.out.println("Enter all the details:");
        emp.input();
        System.out.println("The details are:");
        emp.display();
    }
}