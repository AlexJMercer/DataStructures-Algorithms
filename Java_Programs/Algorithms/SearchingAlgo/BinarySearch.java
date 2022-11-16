package Java_Programs.Algorithms.SearchingAlgo;

import java.util.Scanner;

public class BinarySearch {
    static int binarySearch(int arr[], int x) {
        int i = arr[0], j = arr[arr.length - 1];
        while (i < j)
        {
            int mid = Math.floorDiv((i + j),2);
            if (x == mid)
                return mid;
            if (x > mid)
                i = mid + 1;
            else
                j = mid;
        }
        return -1;
    }
    public static void main(String[] args) {
        Scanner x = new Scanner(System.in);
        System.out.print("Enter size of array : ");
        int size = x.nextInt();
        int arr[] = new int[size];
        System.out.print("\nEnter elements (Ascending Order) : ");
        for (int i = 0; i < size; i++) {
            arr[i] = x.nextInt();
        }

        System.out.print("Enter element to search for : ");
        int ele = x.nextInt();
        int pos = binarySearch(arr, ele);
        if (pos >= 0)
            System.out.print("\nElement " + (pos) + " has been found !!");
        else
            System.out.print("\nElement doesn't exist in the array.");
        x.close();
    }
}
