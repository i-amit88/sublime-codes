class Shape {
    /* int a; //required when need to assign the values early so can use instance
    block
    C(int a) {
    this.a = a; // this keyword defines the instance variables
    // second a is the local varialbe
    }

    void show() {
    System.out.println(a);
    }

    public static void main(String[] args) {

    C r = new C(100);
    r.show();

    }*/
    void draw() {
        System.out.println("cant say any shape");

    }
}

class Square extends Shape {

    @Override
    void draw() {

        System.out.println("square shape");
    }
    /*jvm will first check if overrring method is present in super class also or not if not then error
     super class h the overriding method then will go to the sub class otherwise superclass ones method as referencre is for the super class*/


}

class Demo {
    public static void main(String[] args) {
        Shape r = new Square();
        r.draw();
    }
}
