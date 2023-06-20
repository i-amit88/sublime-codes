import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;

class Framework {
    public static int[] twoSum(int[] nums, int target) {

        int arr[] = new int[2];
        Arrays.sort(nums);
        int i = 0;
        int j = nums.length - 1;
        System.out.println(i);
        // for (int k = 0; k < nums.length; k++) {
        // if (nums[i] + nums[j] == target) {
        // arr[0] = i;
        // arr[1] = j;
        // return arr;

        // } else if (nums[i] + nums[j] > target) {
        // j--;
        // } else if (nums[i] + nums[j] < target) {
        // i++;
        // }
        // }
        return new int[] {};
    }

    public static void main(String[] args) {
        int arr[] = new int[] { 3, 2, 4 };
        int arr2[] = new int[2];
        arr2 = twoSum(arr, 6);
        System.out.println(arr2);

    }
}