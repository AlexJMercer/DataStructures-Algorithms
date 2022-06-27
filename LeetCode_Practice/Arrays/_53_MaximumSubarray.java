package LeetCode_Practice.Arrays;

import java.util.Scanner;

public class _53_MaximumSubarray {
    static int maxSubArray(int[] nums) {    
        int maxsum = Integer.MIN_VALUE;
        int cursum = 0;
        for (int i=0; i < nums.length; i++)
        {
            cursum += nums[i];
            if (cursum > maxsum)
                maxsum = cursum;
            if (cursum < 0)
                cursum = 0;
        }
        return maxsum;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter size of array : ");
        int n = input.nextInt();
        
        int[] nums = new int[n];
        System.out.print("Enter elements : ");
        for (int i=0; i<n; i++)
            nums[i] = input.nextInt();
        
        maxSubArray(nums);
        input.close();
    }
}
