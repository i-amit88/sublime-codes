import java.io.*;
import java.lang.*;

import java.util.Scanner;

public class calculator {

    public static void main(String args[]) {
        System.out.println("Calculator using java");
        Scanner val = new Scanner(System.in);

        int number1 = Integer.parseInt(args[0]);

        int number2 = Integer.parseInt(args[1]);
        String s1 = args[2];
        String s2 = args[3];

        while (true) {

            System.out.println("Enter the operator(+,-,*,/,%)");
            char op = val.next().charAt(0);
            double o = 0;
            switch (op) {
                case '+':
                    o = number1 + number2;
                    break;
                case '-':
                    o = number1 - number2;
                    break;
                case '*':
                    o = number1 * number2;
                    break;
                case '/':
                    o = number1 / number2;
                    break;
                case '%':
                    o = number1 % number2;
                    break;
                default:
                    System.out.println("You entered a wrong input or ");
                    System.exit(0);
                    break;
            }
            System.out.println("The final result:");
            System.out.println();
            // the final output will be
            System.out.println(number1 + " " + op + " " + number2 + "=" + o);

            System.out.println(s1 + " " + s2);

        }
    }

}