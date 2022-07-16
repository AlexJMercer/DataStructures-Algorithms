package LeetCode_Practice.Java_Solutions.Arrays;

import java.util.Arrays;
import java.util.Scanner;

public class _217_ContainsDuplicate {
    static boolean containsDuplicate(int[] nums) {
        int len = nums.length;
        Arrays.sort(nums);
        for (int i=0; i<len-1; i++) {
            if (nums[i] == nums[i+1])
                return true;
        }
        return false;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter size of array : ");
        int n = input.nextInt();
        
        int[] nums = new int[n];
        System.out.print("Enter elements : ");
        for (int i=0; i<n; i++)
            nums[i] = input.nextInt();
        
        containsDuplicate(nums);
        input.close();
    }
}
