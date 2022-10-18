package pack3;
import java.util.*;
import pack1.*;
import pack2.*;

public class abc {
    public static void main(String args[]) {
        int a, b, c;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the value of a and b");
        a = in.nextInt();
        b = in.nextInt();
        while (true) {
            System.out.println("Enter 1 for arithmetic operations. 2 for Relational operations. 3 for Logical operations. 4 for Bitwise operations and 5 to Exit");
            c = in.nextInt();
            switch (c) {
                case 1:
                    Arithmetic aa = new Arithmetic();
                    System.out.println(aa.add(a, b));
                    System.out.println(aa.sub(a, b));
                    System.out.println(aa.mul(a, b));
                    System.out.println(aa.mod(a, b));
                    break;
                case 2:
                    Relational r = new Relational();
                    r.greater(a, b);
                    r.lesser(a, b);
                    r.equal(a, b);
                    break;
                case 3:
                    Bitwise bb = new Bitwise();
                    System.out.println(bb.bitand(a, b));
                    System.out.println(bb.xor(a, b));
                    break;
                case 4:
                    Logical l = new Logical();
                    l.and(a, b);
                    l.or(a, b);
                    break;
                case 5:
                    System.exit(0);
            }
        }
    }
}
