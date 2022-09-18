import java.util.Scanner;

class largest {
    public static void main(String[] args) {
        int x, y, z;
        Scanner sc = new Scanner(System.in);
        x = sc.nextInt();
        y = sc.nextInt();
        z = sc.nextInt();
        if (x > y && x > z) {
            System.out.println("The largest number is: " + x);
        } else if (y > x && y > z) {
            System.out.println("The largest number is: " + y);

        } else {
            System.out.println("The largest number is: " + z);
        }
    }
}