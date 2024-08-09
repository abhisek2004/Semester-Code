//Write a Java program to define Scanner class which reads the int, string and double value as an input.
//assignment3
//11sept2023

import java.util.Scanner;

public class Prg3 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your rollno");
        int rollno = sc.nextInt();
        System.out.println("Enter your name");
        String name = sc.next();
        System.out.println("Enter your fee");
        double fee = sc.nextDouble();
        System.out.println("Rollno:" + rollno + " name:" + name + " Fee:" + fee);
        sc.close();
    }
}