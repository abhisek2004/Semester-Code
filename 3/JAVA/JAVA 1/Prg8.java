//wap to take 3 subject marks of a student and find out its %
//31jul2023
public class Prg8 {
    public static void main(String[] args) {
        double mark_1 = 85;
        double mark_2 = 65;
        double mark_3 = 75;
        double total_mark = mark_1 + mark_2 + mark_3;
        double p = (total_mark / 300) * 100;
        System.out.println("The percentage is: " + p);
    }
}