package LeetCode_Practice.Java_Solutions.Arrays;

import java.util.Scanner;

public class _1_TwoSum {
    static int[] twoSum(int[] nums, int target) {
		int arr[] = new int[2];
		for(int i = 0; i < nums.length; i++) {
			for(int j = i+1; j < nums.length; j++) {
				if(nums[i] + nums[j] == target)
		        {
					arr[0] = i;
					arr[1] = j;
			    }
			}
		}
		return arr;
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
        twoSum(nums, target);
        input.close();
    }
}
