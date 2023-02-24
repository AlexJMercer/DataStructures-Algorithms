package LeetCode_Practice.Java_Solutions.Arrays;

import java.util.Scanner;

public class _1480_RunningSumof1DArray {
    static int[] runningSum(int[] nums) {
        int res[] = new int[nums.length];
        int runningSum = 0;

        for (int i=0; i < nums.length; i++) {
            runningSum += nums[i];
            res[i] = runningSum;
        }

        return res;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter size of array : ");
        int n = input.nextInt();
        
        int[] nums = new int[n];
        System.out.print("Enter elements : ");
        for (int i=0; i<n; i++)
            nums[i] = input.nextInt();
        
        nums = runningSum(nums);
        System.out.print("The resulting array is : ");
        for (int i=0; i<n; i++)
            System.out.print(nums[i] + ", ");

        input.close();
    }
}
