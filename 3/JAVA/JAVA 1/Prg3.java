//wap to take two integer and exchange thier values
//31jul2023
public class Prg3 {
    public static void main(String[] args) {
        int x = 4;
        int y = 9;
        System.out.println("Before swaping");
        System.out.println("x=" + x);
        System.out.println("y=" + y);
        x = x ^ y;
        y = x ^ y;
        x = x ^ y;
        System.out.println("After swaping");
        System.out.println("x=" + x);
        System.out.println("y=" + y);
    }
}