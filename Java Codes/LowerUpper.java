public class LowerUpper{
        public static void main(String args[]) {
                String input = "amit gupta";
                System.out.println("Lower case string is : " + input);
                char strArr[] = input.toCharArray();
                for (int i = 0; i < strArr.length; i++) {
                        if (strArr[i] >= 'a' && strArr[i] <= 'z') {
                                strArr[i] = (char) ((int) strArr[i] - 32);
                        }
                }
                System.out.print("Upper case string is : ");
                for (int i = 0; i < strArr.length; i++) {
                        System.out.print(strArr[i]);
                }
        }
}