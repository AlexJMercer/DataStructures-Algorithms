package Java_Programs.Algorithms.SortingAlgo;

import java.util.Scanner;

public class SelectionSort {

    static void selectionSort(int arr[]) {
        int temp;
        for (int i = 0; i < arr.length-1; i++) {
            int min = 1;
            for (int j = 0; j < arr.length; j++) {
                if (arr[j] < arr[min])
                    min = j;
            }
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
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
