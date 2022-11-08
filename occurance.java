public class occurance {
	public static void main(String[] args) {
		String myStr = "amit gupta";
		int strLastIndex = 0;
		int strFirstIndex = 0;
		System.out.println("String: " + myStr);
		strLastIndex = myStr.lastIndexOf('a');
		strFirstIndex = myStr.indexOf('t');
		System.out.println("The last index of character a in the string: " + strLastIndex);
		System.out.println("The last index of character t in the string: " + strFirstIndex);
	}
}