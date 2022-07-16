package LeetCode_Practice.Java_Solutions.Arrays;

import java.util.Scanner;

public class _35_SearchInsertPosition {
    static int searchInsert(int[] nums, int target) {
        int low=0, mid=0, high=nums.length-1;
        
        while (low <= high) {
            mid = (low + high)/2;
            if(target == nums[mid])
                return mid;
            else if(target > nums[mid])
                low = mid+1;
            else if(target < nums[mid])
                high = mid-1;
        }
        if(target > nums[mid])
            return mid+1;
        else
            return mid;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter size of array : ");
        int n = input.nextInt();
        
        int[] nums = new int[n];
        System.out.print("Enter elements : ");
        for (int i=0; i<n; i++)
            nums[i] = input.nextInt();
        
        System.out.print("Enter target to find : ");
        int target = input.nextInt();
        System.out.println(searchInsert(nums, target));
        input.close();   
    }
}