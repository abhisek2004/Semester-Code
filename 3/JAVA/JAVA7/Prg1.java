// write a java program  to create a class box that uses parameterized constructor to initialize the dimension of a box.
// the dimension of the box are width,height,depth
// the class should have a method that can return the volume of the box
// create an object of the box class and test the functionality

class  {
    private double width;
    private double height;
    private double depth;

 Box(double width, double height, double depth) {
            this.width = width;
            this.height = height;
            this.depth = depth;
        }

    public double getVolume() {
        return width * height * depth;
    }
}

class Prg1 {
    public static void main(String[] args) {
        Box box = new Box(5.0, 10.0, 15.0);
        double volume = box.getVolume();
        System.out.println("Volume of the box is: " + volume);
    }
}