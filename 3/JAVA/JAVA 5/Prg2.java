public class Prg2 {

    public static void main(String args[]) {
        double e = 1;
        for (int x = 1; x < 5; x++)
            e = e + 1 / (double) fictorial(x);
        System.out.println("e: " + e);
    }

    public static double fictorial(int n) {
        int x;
        if (n < 1) {
            return 0;
        } else {
            if (n == 1) {
                return 1;
            } else if (n > 1) {
                return n * fictorial(n - 1);
            }
        }
        return 0;
    }
}