import java.util.*;
import java.lang.Exception;

public class Handling {
   public static void main(String[] args) {
      System.out.println(
            "***Menu***\n1. Arithmetic Exception\n2. Null Pointer Exception\n3. ArrayIndexOutOfBound Exception\n4.StringIndexOutOfBoundException\n5.ClassNotFoundException\n6.IllegalArgument Exception\n7. NumberFormat Exception\n8. CloneNotSupportedException\n9. MethodNotFound Exception\n10. InputMismatch Exception\nPress any key to exit");
      while (true) {
         System.out.print("Enter a choice:");
         Scanner sc = new Scanner(System.in);
         int num = sc.nextInt();
         switch (num) {
            case 1:
               System.out.println("Enter two numbers:");
               int a = sc.nextInt();
               int b = sc.nextInt();
               try {
                  int c = a / b;
                  System.out.println("Division=" + c);
               } catch (ArithmeticException e) {
                  System.out.println(e);
               }
               break;
            case 2:
               String ap = null;
               try {
                  String s = ap.toUpperCase();
                  System.out.println("String:" + s);
               } catch (NullPointerException ec) {
                  System.out.println(ec);
               }
               break;
            case 3:
               System.out.println("Enter a array of numbers");
               int arr[] = new int[5];
               for (int i = 0; i < 5; i++) {
                  arr[i] = sc.nextInt();
               }
               System.out.print("Enter index:");
               int nt = sc.nextInt();
               try {
                  System.out.println(arr[nt]);
               } catch (ArrayIndexOutOfBoundsException ary) {
                  System.out.println(ary);
               }
               break;

            case 4:
               System.out.println("Enter a String: ");
               String st;
               st = sc.next();
               System.out.print("Enter index:");
               int no = sc.nextInt();
               try {
                  System.out.println(st.charAt(no));
               } catch (StringIndexOutOfBoundsException ex) {
                  System.out.println(ex);
               }
               break;
            case 5:
               try {
                  Class.forName("Demo.txt");
               } catch (ClassNotFoundException cl) {
                  System.out.println(cl);
               }
               break;

            case 6:
               System.out.println("Enter a marks");
               int m = sc.nextInt();
               if (m < 0 || m > 100) {
                  throw new IllegalArgumentException("invalid marks");
               } else {
                  System.out.println("Marks=" + m);
               }
               break;

            case 7:
               System.out.println("Enter a number");
               String s = sc.next();
               try {
                  int i = Integer.parseInt(s);
                  System.out.println("Number=" + i);
               } catch (NumberFormatException nf) {
                  System.out.println(nf);
               }
               break;

            case 8:
               try {
                  Handling h = new Handling();
                  h.clone();
               } catch (CloneNotSupportedException nf) {
                  nf.printStackTrace();
               }
               break;

            case 9:
               System.out.println("Enter a number for its square");
               int n = sc.nextInt();
               try {
                  System.out.println((n * n));
               } catch (InputMismatchException ie) {
                  System.out.println(ie);
               }
               break;
         }
      }
   }
}