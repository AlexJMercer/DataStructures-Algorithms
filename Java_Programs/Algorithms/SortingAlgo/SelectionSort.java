package Java_Programs.Algorithms.SortingAlgo;

import java.util.Scanner;

public class SelectionSort {

    static void selectionSort(int arr[]) {
        int temp;
        for (int i = 0; i < arr.length; i++) {
            int min = arr[i];
            int minIndex = i;
            for (int j = i; j < arr.length; j++) {
                if (arr[j] < min) {
                    min = arr[j];
                    minIndex = j;
                }
            }
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }

        disp(arr);
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
        selectionSort(arr);
        x.close();
    }    
}
