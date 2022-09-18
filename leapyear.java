import java.util.*;

public class leapyear {
    static int leap_year() {
        int i;
        int count = 0;
        for (i = 1970; i <= 2022; i++) {
            if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
                count++;
        }
        return count;
    }

    public static void main(String[] args) {
        System.out.println("enter starting the date:");
        Scanner date = new Scanner(System.in);
        int a = date.nextInt();
        System.out.println("enter the starting month:");
        Scanner month = new Scanner(System.in);
        int b = month.nextInt();
        System.out.println("enter the starting year:");
        Scanner year = new Scanner(System.in);
        int c = year.nextInt();
        System.out.println("enter current the date:");
        Scanner date1 = new Scanner(System.in);
        int d = date1.nextInt();
        System.out.println("enter the current month:");
        Scanner month1 = new Scanner(System.in);
        int e = month1.nextInt();
        System.out.println("enter the current year:");
        Scanner year1 = new Scanner(System.in);
        int f = year1.nextInt();
        int days = 0;
        switch (e) {
            case 1:
                days = 31;
                break;
            case 2:
                days = 59;
                break;
            case 3:
                days = 90;
                break;
            case 4:
                days = 120;
                break;
            case 5:
                days = 151;
                break;
            case 6:
                days = 181;
                break;
            case 7:
                days = 212;
                break;
            case 8:
                days = 243;
                break;
            case 9:
                days = 273;
                break;
            case 10:
                days = 304;
                break;
            case 11:
                days = 334;
                break;
            case 12:
                days = 365;
                break;
            default:
                System.out.println("You entered a month ");
                break;
        }
        int leapYear = leap_year();
        int totalDays = (f - c) * 365 + (days - 31) + (a + d) + leapYear;

        System.out.println("no. of days is" + totalDays);

    }
}