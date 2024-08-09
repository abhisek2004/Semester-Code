// write a java program to create  called named Animal which include methods like eat() and sleep()
// create a child class  of animal named 'Bird' and override the parent class method. And a new method named fly()
// create an instance of animal class and invoke the eat and sleep method using this object
// creata an instance of bird class an invoke 

class Animal {

    void eat() {
        System.out.println("Animal is eating");
    }

    void sleep() {
        System.out.println("Animal is sleeping");
    }
}

class Bird extends Animal {

    void eat() {
        System.out.println("Bird is eating");
    }

    void sleep() {
        System.out.println("Bird is sleeping");
    }

    public void fly() {
        System.out.println("Bird is flying");
    }
}

public class Prg2 {
    public static void main(String[] args) {
        Animal animal = new Animal();
        animal.eat();
        animal.sleep();

        Bird bird = new Bird();
        bird.eat();
        bird.sleep();
        bird.fly();
    }
}