interface Shape {
    void draw();

    void erase();
}

class Triangle implements Shape {
    public void draw() {
        System.out.println("Drawing Triangle");
    }

    public void erase() {
        System.out.println("Erasing Triangle");
    }

}

class Circle1 implements Shape {
    public void draw() {
        System.out.println("Drawing Circle");
    }

    public void erase() {
        System.out.println("Erasing Circle");
    }

}

class Rectangle1 implements Shape {
    public void draw() {
        System.out.println("Drawing Rectangle");
    }

    public void erase() {
        System.out.println("Erasing Rectangle");
    }

}

class Prg2 {
    public static void main(String[] args) {
        Shape sc;
        sc = new Circle1();
        sc.draw();
        sc.erase();
        sc = new Triangle();
        sc.draw();
        sc.erase();
        sc = new Rectangle1();
        sc.draw();
        sc.erase();
    }
}

// write a user define function to check whether a string passed as parameter is
// a palindrome or not if the string is a palindromethen it will return true
// otherwise false