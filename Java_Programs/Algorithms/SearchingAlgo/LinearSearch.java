package Java_Programs.Algorithms.SearchingAlgo;

import java.util.Scanner;

public class LinearSearch {
    static int linearSearch(int arr[], int x) {
        for (int i = 0; i < arr.length; i++)
        {
            if (arr[i] == x)
                return i;
            else
                continue;
        }
        return -1;
    }

    public static void main(String[] args) {
        Scanner x = new Scanner(System.in);
        System.out.print("Enter size of array : ");
        int size = x.nextInt();
        int arr[] = new int[size];
        System.out.print("\nEnter elements : ");
        for (int i = 0; i < size; i++) {
            arr[i] = x.nextInt();
        }

        System.out.print("Enter element to search for : ");
        int ele = x.nextInt();
        int pos = linearSearch(arr, ele);
        if (pos >= 0)
            System.out.print("\nElement found in position " + (pos+1));
        else
            System.out.print("\nElement doesn't exist in the array.");
        x.close();
    }
}
