import java.util.Scanner;

class NoSufficientBalance extends Exception {

    String message;

    public NoSufficientBalance(String message) {
        this.message = message;
    }

    @Override
    public String toString() {
        return message;
    }
}

public class Account {

    static double current_balance = 1000;

    public static void main(String[] args) throws MinimumAccountBalance {
        Scanner s = new Scanner(System.in);

        while (true) {
            System.out.println("Enter amount to withdrawal or enter 0 to exit");
            int n = s.nextInt();
            try {
                if (current_balance < n) {
                    throw new MinimumAccountBalance("Insufficient funds ! your Current balance is " + current_balance);

                } else {
                    System.out.println("Please Take The Money : " + n);
                    current_balance -= n;
                }

            } catch (MinimumAccountBalance mab) {
                mab.printStackTrace();
            }
            if (n == 0) {
                break;
            }

        }
    }
}
