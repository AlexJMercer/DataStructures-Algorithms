package LeetCode_Practice.Java_Solutions.HashMaps;

import java.util.HashMap;
import java.util.Scanner;

public class _1_TwoSum_HM {
    static int[] twoSum(int[] nums, int target) {
		int[] arr = new int[2];
        HashMap<Integer, Integer> map = new HashMap<>();

        for(int i=0; i<nums.length; i++) {
            if (map.containsKey(target-nums[i]))
            {
                arr[0] = map.get(target-nums[i]);
                arr[1] = i;
            }
            else
                map.put(nums[i], i);
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
