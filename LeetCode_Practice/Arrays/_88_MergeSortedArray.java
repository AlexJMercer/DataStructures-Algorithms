package LeetCode_Practice.Arrays;

import java.util.Arrays;

public class _88_MergeSortedArray {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        for (int i=m, j=0; i < nums1.length; i++, j++)
        {
            nums1[i] = nums2[j];
        }
        
        Arrays.sort(nums1);
    }

    public static void main(String[] args) {
        // LeetCode Main function unknown
    }
}
