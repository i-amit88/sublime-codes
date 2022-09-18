public class Temp {
    public static void main(String args[]) {
        int n = 4;
        for (int i = n; i > 0; i--) {
            for (int j = 1; j < n; j++) {
                if (j >= i) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}