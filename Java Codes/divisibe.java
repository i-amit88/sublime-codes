import java.util.*;

public class divisibe {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter lower and upper limit of loop");
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.println("enter dividing no");
        int k = sc.nextInt();
        int sum = 0, n = a;
        while (n >= a && n <= b) {
            if (n % k == 0) {
                System.out.println(n);
                sum = sum + n;
            }
            n++;
        }
        System.out.println("sum is=" + sum);
    }
}