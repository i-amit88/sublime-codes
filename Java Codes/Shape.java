public class Shape {
    // int a; //required when need to assign the values early so can use instance
    // block
    // C(int a) {
    // this.a = a; // this keyword defines the instance variables
    // // second a is the local varialbe
    // }

    // void show() {
    // System.out.println(a);
    // }

    // public static void main(String[] args) {

    // C r = new C(100);
    // r.show();

    // }
    void draw() {
        System.out.println("cant say any shape");

    }
}

class Square extends Shape {
    void draw() {
        System.out.println("square shape");
    }

}

class Demo {
    public static void main(String[] args) {
        Shape r = new Square();
        r.draw();
    }
}
