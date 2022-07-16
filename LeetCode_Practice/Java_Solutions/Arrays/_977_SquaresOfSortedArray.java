package LeetCode_Practice.Java_Solutions.Arrays;

import java.util.Arrays;
import java.util.Scanner;

public class _977_SquaresOfSortedArray {
    static int[] sortedSquares(int[] nums) {
        for (int i=0; i < nums.length; i++) {
            nums[i] *= nums[i];
        }
        Arrays.sort(nums);
        return nums;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter size of array : ");
        int n = input.nextInt();
        
        int[] nums = new int[n];
        System.out.print("Enter elements : ");
        for (int i=0; i<n; i++)
            nums[i] = input.nextInt();
        
        System.out.println(sortedSquares(nums));
        input.close();
    }
}
