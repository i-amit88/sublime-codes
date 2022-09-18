import java.util.Scanner;

public class Squares {

    static int sum;

    static void SquareSum(int a) {
        sum += a * a;

    }

    public static void main(String args[]) {
        int a;
        Scanner sc = new Scanner(System.in);
        System.out.println("Length of array");
        a = sc.nextInt();

        int arr[] = new int[a];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
            SquareSum(arr[i]);
        }
        System.out.println("sum of squares of numbers are " + sum);
    }
}
