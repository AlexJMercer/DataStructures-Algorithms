#include <iostream>
#include <vector>
using namespace std;

void disp(int *arr, int size)
{
    cout << "Sorted Array : ";
    for (int i = 0; i < size; i++)
    {
        if (i < (size - 1))
            cout << arr[i] << ", ";
        else
            cout << arr[i];
    }
}

void merge(int *arr, int low, int mid, int high)
{
    int size_left = mid - low + 1;
    int size_right = high - mid;
 
    int *left = new int[size_left],
        *right = new int[size_right];
 
    for (int i = 0; i < size_left; i++)
        left[i] = arr[low + i];
    for (int j = 0; j < size_right; j++)
        right[j] = arr[mid + 1 + j];
 
    int i = 0, j = 0;
    int k = low;
 
    while (i < size_left && j < size_right) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        }
        else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < size_left) {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < size_right) {
        arr[k] = right[j];
        j++;
        k++;
    }
    delete[] left;
    delete[] right;
}

void merge_sort(int arr[], int low, int high)
{
    if (low >= high)
        return;
    
    int mid = low + (high - low) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{   
    int size, data;
    cout << "Enter size of the list : ";
    cin >> size;
    int *arr = new int[size];
    cout << "Enter elements for the list (Unordered) : ";
    for (int i = 0; i < size; i++)
    {
        cin >> data;
        arr[i] = data;
    }
    merge_sort(arr, 0, size-1);
    disp(arr, size);
    return 0;
}