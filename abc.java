import java.util.*;

class abc {
    int len = 0;

    public static void main(String[] args) {
        abc obj = new abc();
        obj.display();
    }

    void display() {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the string");
        String str = sc.nextLine();
        int index = 0;
        int c = 0;
        int k;
        len = str.length();
        System.out.println("length of string is: " + len);
        for (int i = 0; i < len; i++) {
            char ch = str.charAt(i);
            if (ch == 'a' || ch == 'A') {
                k = 1;
                index = i;
                c++;
                if (k == 1) {
                    System.out.println("a is present at  " + index);
                }
            }
        }
        if (c > 1) {
            System.out.println("A is present in the string:  Yes");
            System.out.println("No of times a is present  " + c);
        } else {
            System.out.println("A is not present in the string:No");
        }
    }
}