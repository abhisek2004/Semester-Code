//Write a Java program that prints all real solutions to the quadratic equation ax2 + bx +c=0.
//assignment 3
//11sept2023

public class Prg5 {
    public static void main(String args[]) throws IOException {
        double x1, x2, disc, a, b, c;
        Input Stream Reader obj = new InputStreamReader(System.in);
        Buffered Reader br = new BufferedReader(obj);
        System.out.println("enter a,b,c values");
        a = Double.parseDouble(br.readLine());
        b = Double.parseDouble(br.readLine());
        c = Double.parseDouble(br.readLine());
        disc = (b * b) - (4 * a * c);
        if (disc == 0) {
            System.out.println("roots are real and equal ");
            x1 = x2 = -b / (2 * a);
            System.out.println("roots are " + x1 + "," + x2);
        } else if (disc > 0) {
            System.out.println("roots are real and unequal");
            x1 = (-b + Math.sqrt(disc)) / (2 * a);
            x2 = (-b + Math.sqrt(disc)) / (2 * a);
            System.out.println("roots are " + x1 + "," + x2);
        } else {
            System.out.println("roots are imaginary");
        }
    }
}