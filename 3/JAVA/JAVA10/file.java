import java.io.*;
public class file {
    public static void main(String[] args) {
        try {
            FileWriter fw = new FileWriter("D://dest.txt");
            // fw.write("panda is a good boy");
            // fw.close();
            System.out.println("writen succesfully");
            FileReader fr = new FileReader("D://panada.txt");
            int c;
            while ((c = fr.read()) != -1) {
               fw.write(c);
            }
            fr.close();
            fw.close();
                
        } catch (IOException e) {
            System.out.println(e);
        }
    }
}