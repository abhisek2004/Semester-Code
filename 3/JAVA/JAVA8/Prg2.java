//assignment 04
//02oct2023
//question no-03

import java.util.Scanner;

class Bank {
    double getRateOfIntrest(double x) {
        double y = x * 0;
        return y;
    }
}

class SBI extends Bank {
    double getRateOfIntrest(double x) {
        double a = x * 7.4 / 100;
        return a;
    }
}

class PNB extends Bank {
    double getRateOfIntrest(double x) {
        double b = x * 6.3 / 100;
        return b;
    }
}

class AXIS extends Bank {
    double getRateOfIntrest(double x) {
        double c = x * 8.7 / 100;
        return c;
    }
}

class Prg2 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("INPUT Number:");
        double x = sc.nextDouble();
        Bank obj;
        obj = new SBI();
        System.out.println("Intrest in SBI: " + obj.getRateOfIntrest(x));
        obj = new PNB();
        System.out.println("Intrest in PNB: " + obj.getRateOfIntrest(x));
        obj = new AXIS();
        System.out.println("Intrest in AXIS: " + obj.getRateOfIntrest(x));
    }
}