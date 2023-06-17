import java.util.*;

public class Combinations {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int input[] = new int[3];
        for (int i = 0; i < input.length; i++) {
            input[i] = sc.nextInt();
        }
        for (int x = 0; x < 3; x++) {
            for (int y = 0; y < 3; y++) {
                for (int z = 0; z < 3; z++) {
                    if (x != y && y != z && z != x)
                        System.out.println(input[x] * 100 + input[y] * 10 + input[z]);
                }
            }
        }
    }

}
