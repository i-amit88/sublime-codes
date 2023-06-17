import java.util.*;

class ConversionIntIntegerString {
    int a;
    Integer b;
    String c;
    Scanner sc = new Scanner(System.in);

    void input_int() {
        System.out.println("Enter int :-");
        a = sc.nextInt();
        sc.nextLine();
    }

    void input_integer() {
        System.out.println("Enter integer :-");
        int a = sc.nextInt();
        sc.nextLine();
        b = new Integer(a);
    }

    void input_string() {
        System.out.println("Enter string :-");
        c = sc.next();
    }

    void int_to_integer() {
        b = new Integer(a);
        System.out.println("Newinteger:-" + b);
    }

    void integer_to_string() {
        c = String.valueOf(b);
        System.out.println("NewString:-" + c);
    }

    void string_to_int() {
        a = Integer.valueOf(c.trim());
        System.out.println("Newint:-" + a);
    }

    void int_to_string() {
        c = String.valueOf(a);
        System.out.println("NewString:-" + c);
    }

    void string_to_integer() {
        b = new Integer(Integer.parseInt(c));
        System.out.println("NewInteger:-" + b);
    }

    void integer_to_int() {
        int a = (int) b;
        System.out.println("Newint:-" + a);
    }

    void choose(int choice) {

        switch (choice) {
            case 1:
                input_int();
                int_to_integer();
                break;
            case 2:
                input_integer();
                integer_to_string();
                break;
            case 3:
                input_string();
                string_to_int();
                break;
            case 4:
                input_int();
                int_to_string();
                break;
            case 5:
                input_string();
                string_to_integer();
                break;
            case 6:
                input_integer();
                integer_to_int();
                break;
            default:
                System.out.println("IncorrectInput");
        }
    }

    void choice() {
        System.out.println(
                "Enter \n 1:-int to Integer\n 2:-Integer toString\n 3:-String to int\n 4:-int to String\n 5:- String to Integer\n 6:- Integertoint");
        int choice = sc.nextInt();
        choose(choice);
    }

    public static void main(String args[]) {
        ConversionIntIntegerString obj = new ConversionIntIntegerString();
        obj.choice();
    }
}