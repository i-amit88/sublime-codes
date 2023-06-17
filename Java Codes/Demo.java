/*     class Shape {
        /*
        * int a; //required when need to assign the values early so can use instance
        * block
        * C(int a) {
        * this.a = a; // this keyword defines the instance variables
        * // second a is the local varialbe
        * }
        * 
        * void show() {
        * System.out.println(a);
        * }
        * 
        * public static void main(String[] args) {
        * 
        * C r = new C(100);
        * r.show();
        * 
        * }
        
        void draw() {
            System.out.println("cant say any shape");

        }
    }


    class Square extends Shape {

        @Override
        void draw() {

            System.out.println("square shape");
        }
        /*
        * jvm will first check if overrring method is present in super class also or
        * not if not then error
        * super class has the overriding method then will go to the sub class otherwise
        * superclass ones method as referencre is for the super class
        

        // used when reference is for another class and method to be called is from another class
    }
*/



/*    abstract class A {
        A() {
            System.out.println("A class constructor");
        }

        public abstract void m1(); // abstract method cannot have body
    }

    class B extends A {
        B() {
            System.out.println("B class constructor");
        }

        public void m1() {
            System.out.println("b class method ");
        }
    }
*/
abstract class Programming {
    abstract void developer();
    // abstract void developerHTML();

    abstract void rank();
}

abstract class HTML extends Programming { // as only one method is abstracted
    void developer() {
        System.out.println("developer method html");
    }

    // if rank is also overridden then it will bwcome abstract class
    /*
     * void rank() {
     * System.out.println("rank is 2nd html");
     * }
     */
}

class JAVA extends /* Programming */ HTML {
    void developer() {

        System.out.println("developer method java ");
    }

    void developerHTML() {
        super.developer();
    }

    // if rank is also overridden then it will become abstract class
    void rank() {
        System.out.println("rank is 2nd java ");
    }

    // if i need only one method to be overridden
}

public class Demo {
    public static void main(String[] args) {
        // Shape r = new Square();
        // r.draw();
        // A r = new B(); // w.r.t A object B is created
        // r.m1();
        /* Programming */JAVA h = new /* HTML */ JAVA(); // as whole control is now on JAVA , JAVA as super keyword will
                                                         // call parent calss if not then declare super keyword function
                                                         // in abstract class Programming j = new JAVA();
        h.developerHTML(); // for html
        h.rank();
        j.developer(); // for java
        j.rank();

    }
}
