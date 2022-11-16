package Java_Programs.Algorithms.SortingAlgo;

class MergeSort {
    void merge(int arr[], int low, int mid, int high) {
        int n1 = mid - low + 1;
        int n2 = high - mid;

        int L[] = new int[n1];
        int M[] = new int[n2];

        for (int i = 0; i < n1; i++)
            L[i] = arr[low + i];
        for (int j = 0; j < n2; j++)
            M[j] = arr[mid + 1 + j];

        int i, j, k;
        i = 0;
        j = 0;
        k = low;
        while (i < n1 && j < n2) {
            if (L[i] <= M[j]) {
                arr[k] = L[i];
                i++;
            } else {
                arr[k] = M[j];
                j++;
            }
            k++;
        }
        while (i < n1) {
            arr[k] = L[i];
            i++;
            k++;
        }
        while (j < n2) {
            arr[k] = M[j];
            j++;
            k++;
        }
    }

    void mergeSort(int arr[], int low, int high) {
        if (low < high) {

            int m = (low + high) / 2;
            mergeSort(arr, low, m);
            mergeSort(arr, m + 1, high);
            merge(arr, low, m, high);
        }
    }

    static void printArray(int arr[]) {
        int n = arr.length;
        for (int i = 0; i < n; ++i)
            System.out.print(arr[i] + " ");
        System.out.println();
    }

    public static void main(String args[]) {
        int arr[] = { 6, 5, 12, 10, 9, 1 };
        MergeSort ob = new MergeSort();
        ob.mergeSort(arr, 0, arr.length - 1);
        System.out.println("Sorted array:");
        printArray(arr);
    }
}