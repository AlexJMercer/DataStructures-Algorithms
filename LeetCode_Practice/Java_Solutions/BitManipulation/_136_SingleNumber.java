package LeetCode_Practice.Java_Solutions.BitManipulation;

import java.util.Scanner;

public class _136_SingleNumber {
    static int singleNumber(int[] nums) {
        int res = 0;
        for (int i : nums) {
            res ^= i;
        }
        return res;
    }

    public static void main(String[] args) {
        Scanner x = new Scanner(System.in);

        System.out.print("Enter size of array : ");
        int n = x.nextInt();
        
        int[] nums = new int[n];
        System.out.print("Enter elements : ");
        for (int i=0; i<n; i++)
            nums[i] = x.nextInt();
        System.out.println("Output : " + singleNumber(nums));
        x.close();
    }
}
