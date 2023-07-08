public class knapsack {
    // creating a knapsack recursive function

    static int knapsackF(int wt[], int val[], int w, int n) {

        if (n == 0 || w == 0) {
            return 0;
        }

        if (wt[n - 1] <= w) {
            return Math.max(val[n - 1] + knapsackF(wt, val, w - 1, n - 1), knapsackF(wt, val, w, n - 1));

        } else if (wt[n - 1] > w) {
            return knapsackF(wt, val, w, n - 1);
        }

        return 0;
    }

    public static void main(String[] args) {
        int wt[] = { 10, 20, 30 };
        int val[] = { 60, 100, 120 };
        int w = 50;
        int n = val.length;

        int result = knapsackF(wt, val, w, n);
        System.out.println(result);

    }
}
