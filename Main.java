import java.util.*;
class Main {
    public static void main(String[] args) {
        String str = "";
        Scanner sc = new Scanner(System.in);
        System.out.println("enter string ");
        str = sc.nextLine();
        for (int i = 0; i < str.length(); i++) {
            int ch = str.charAt(i);

            if (ch > 64 && ch < 91) {
                ch = ch;
                // ch=ch+32;//lowercase conversion
                System.out.print((char) ch);
            }
            if (ch > 96 && ch < 123) {
                ch = ch - 32;
                System.out.print((char) ch);
            } else if (ch == 32) {
                System.out.print(" ");
            }
        }
    }
}