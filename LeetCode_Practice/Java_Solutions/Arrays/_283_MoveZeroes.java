package LeetCode_Practice.Java_Solutions.Arrays;

import java.util.Scanner;

public class _283_MoveZeroes {
    static void moveZeroes(int[] nums) {
        int temp, index = 0;

        if (nums.length == 0)
            return;
        for (int i=0; i < nums.length; i++) {
            if (nums[i] != 0)
            {
                temp = nums[index];
                nums[index++] = nums[i];
                nums[i] = temp; 
            }
        }
    }

    public static void main(String[] args) {
        Scanner x = new Scanner(System.in);
        System.out.print("Enter number of elements : ");
        int n = x.nextInt();
        int nums[] = new int[n];

        System.out.print("Enter the elements : ");
        for (int i=0; i < n; i++)
            nums[i] = x.nextInt();
            
        moveZeroes(nums);
        System.out.print("Resultant array : ");
        for (int i=0; i < n; i++)
            System.out.print(nums[i] + " ");

        x.close();
    }
}
