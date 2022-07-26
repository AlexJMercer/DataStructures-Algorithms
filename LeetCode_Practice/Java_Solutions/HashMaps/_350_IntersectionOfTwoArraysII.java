package LeetCode_Practice.Java_Solutions.HashMaps;

import java.util.ArrayList;
import java.util.HashMap;

public class _350_IntersectionOfTwoArraysII {
    public int[] intersect (int[] nums1, int[] nums2) {
        HashMap<Integer, Integer> map = new HashMap<Integer, Integer>();
        ArrayList<Integer> list = new ArrayList<Integer>();

        for (int i = 0; i < nums1.length; i++) {
            /**
             * During the first run, all the elements are stored in a Hashmap
             * As they are being stored, the 'key' is the array element, while
             * the 'value' is the Number of Occurrences of that element.
             * 
             * If there's a duplicate element in the array the 'value' is
             * incremented by 1.
             */

            if (map.containsKey(nums1[i]))
                map.put(nums1[i], map.get(nums1[i]) + 1);
            else
                map.put(nums1[i], 1);
        }

        for (int i=0; i < nums2.length; i++) {
            /**
             * Now we iterate through the second array, and insert any element
             * into the List that has a positive 'value' in the Hashmap.
             * 
             * 
             */

            if (map.containsKey(nums2[i]) && map.get(nums2[i]) > 0) {
                map.put(nums2[i], map.get(nums2[i])-1);
                list.add(nums2[i]);
            }
        }

        int[] arr = new int[list.size()];
        for (int i=0; i < list.size(); i++)
            arr[i] = list.get(i);

        return arr;
    }
}
