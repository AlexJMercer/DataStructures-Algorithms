package LeetCode_Practice.Java_Solutions.Arrays;

public class _34_FindFirstAndLastPos {
    public int[] searchRange(int[] nums, int target) {
        int arr[] = new int[]{-1, -1};
        if (nums.length == 0)
            return arr;
        
        int ptr=1;
        for (int i=0; i < nums.length; i++) {
            if (ptr == 1 && nums[i] == target) {
                arr[0] = i;
                arr[1] = i;
                ptr++;
            }
            else if (ptr > 1 && nums[i] == target) {
                arr[1] = i;
                ptr++;
            }
        }
        return arr;
    }
}
