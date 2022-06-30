package LeetCode_Practice.Arrays;

import java.util.Scanner;

public class _189_RotateArray {
    static void rotate(int[] nums, int k) {
        int temp=0, len = nums.length;
        int[] extra = new int[k];
        
        
        if (k <= len)
        {
            for (int i=0, j=len-k; i < k; i++, j++)
            extra[i] = nums[j];
            
            for (int i = len-1; i >= k; i--)
                nums[i] = nums[i-k];

            for (int i=0, j=0; i < k; i++, j++)
                nums[i] = extra[j];
        }
        else
        {
            temp = nums[0];
            nums[0] = nums[1];
            nums[1] = temp;
        }
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter size of array : ");
        int n = input.nextInt();
        
        int[] nums = new int[n];
        System.out.print("Enter elements : ");
        for (int i=0; i<n; i++)
            nums[i] = input.nextInt();
        
        System.out.print("Enter steps to rotate : ");
        int k = input.nextInt();
        rotate(nums, k);

        System.out.print("The resulting array is : ");
        for (int i=0; i<n; i++)
            System.out.print(nums[i] + ", ");

        input.close();
    }
}
