import java.util.*;

class ConversionFloatFloatString {
    float a;
    Float b;
    String c;
    Scanner sc = new Scanner(System.in);

    void input_float() {
        System.out.println("Enter float :-");
        a = sc.nextFloat();
        sc.nextLine();
    }

    void input_Float() {
        System.out.println("Enter Float :-");
        float a = sc.nextFloat();
        sc.nextLine();
        b = new Float(a);
    }

    void input_string() {
        System.out.println("Enter string :-");
        c = sc.next();
    }

    void float_to_Float() {
        b = new Float(a);
        System.out.println("NewFloat:-" + b);
    }

    void Float_to_string() {
        c = String.valueOf(b);
        System.out.println("NewString:-" + c);
    }

    void string_to_float() {
        a = Float.valueOf(c.trim());
        System.out.println("Newfloat:-" + a);
    }

    void float_to_string() {
        c = String.valueOf(a);
        System.out.println("NewString:-" + c);
    }

    void string_to_Float() {
        b = new Float(Float.parseFloat(c));
        System.out.println("NewFloat:-" + b);
    }

    void Float_to_float() {
        float a = (float) b;
        System.out.println("Newfloat:-" + a);
    }

    void choose(int choice) {
        switch (choice) {
            case 1:
                input_float();
                float_to_Float();
                break;
            case 2:
                input_Float();
                Float_to_string();
                break;
            case 3:
                input_string();
                string_to_float();
                break;
            case 4:
                input_float();
                float_to_string();
                break;
            case 5:
                input_string();
                string_to_Float();
                break;
            case 6:
                input_Float();
                Float_to_float();
                break;
            default:
                System.out.println("IncorrectInput");
        }
    }

    void choice() {
        System.out.println(
                "Enter \n 1:-float to Float\n 2:-Float to String\n3:-Stringtofloat\n4:-floatto String\n5:-Stringto Float\n6:-Float tofloat");
        int choice = sc.nextInt();
        choose(choice);
    }

    public static void main(String args[]) {
        ConversionFloatFloatString obj = new ConversionFloatFloatString();
        obj.choice();
    }
}