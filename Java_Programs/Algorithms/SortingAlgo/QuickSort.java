package Java_Programs.Algorithms.SortingAlgo;

import java.util.Scanner;

public class QuickSort {
    static void quickSort(int[] arr, int low, int high) {
        if (low >= high)
            return;

        int start = low;
        int end = high;
        int mid = (start + end)/2;
        int pivot = arr[mid];

        while (start <= end) {
            while (arr[start] < pivot)
                start++;
            while (arr[end] > pivot)
                end--;
            
            if (start <= end) {
                int temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
                start++;
                end--;
            }
        }
        quickSort(arr, low, end);
        quickSort(arr, start, high);
    }

    static void disp(int arr[]) {
        int n = arr.length;
        for (int i = 0; i < n; ++i)
            System.out.print(arr[i] + " ");
        System.out.println();
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

        System.out.println("Sorting...");
        quickSort(arr, 0, size-1);
        disp(arr);
        x.close();
    }
}
